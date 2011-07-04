function [gi, ai] = LINE_IDX_TO_GROUP_ANIMAL(i, Group)
    gi = 0;
    ai = 0;
    ac = 0;
    tgi = 1;
    for kkk = [ Group.Nfiles ] 
        if ( i > ac ) && ( i <= ac + kkk )
            gi = tgi;
            ai = i - ac;
        end
        tgi = tgi + 1;
        ac = ac + kkk;
    end
end