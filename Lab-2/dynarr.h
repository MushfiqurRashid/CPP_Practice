#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr{
private:
    int *data;
    int size;

public:
    dynArr();
    dynArr(int);
    ~dynArr();
    setValue(int,int);
    getVAlue(int);
};
#endif // DYNARR_H_INCLUDED
