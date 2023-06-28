function   re= mean_shift( ser,p)
    [m n]=size(ser);
    tmp=double(ser);

    pre_w=tmp(p);
    point=p;
    while 1
        ser=tmp-pre_w;

        for i=1:m*n
            if i ~= point
                ser(i)=ser(i)/(i-point);            %i-point是距离，就是各种公式里的h
            end
        end

        ser=ser.^2;
       K=(10/sqrt(2*pi))*exp(-0.5*ser);         %传说中的核函数
    
        w=sum(tmp.*(K))/sum(K);

        if abs(w-pre_w)<0.01
            break;
        end
        pre_w=w; 
    end
 %   tmp1=abs(tmp-w);
 %   [i point]=min(tmp1);
    re=w;
 %   if max(tmp)-w<0.01
 %       point=0;
 %   end
 %   point=w;
end