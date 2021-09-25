#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
    public:
        void setlength(float len);
        void setwidth(float w);
        float getlength();
        float getwidth();
        float getarea();
        rectangle();
        virtual ~rectangle();

    protected:

    private:
        float length;
        float width;
};

#endif // RECTANGLE_H
