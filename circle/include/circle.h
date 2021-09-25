#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
    public:
        double get_area();
        double get_perineter();
        void set_redius(double r);
        double get_redius();
        circle();
        virtual ~circle();

    protected:

    private:
        double redius;
};

#endif // CIRCLE_H
