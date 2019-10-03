#include <bits/stdc++.h>



int W=4;
int L=20;

int fg=0;
using namespace std;

double lentgh_to_base(int baseW, int baseL, int w, int l)
{
    int a=w-baseW, b=w-baseL; //a, b - distance to the base
    return sqrt(a*a+b*b);
}
double length_to_base(int w, int l)
{
    return sqrt(w*w+l*l);
//    return lentgh_to_base(a, 0, 0, w, l);
}

double f(vector<vector<int>>& a, int w, int l, int ec)//empty_cells
{

    cout<<"W: "<<w<<" "<<"L:"<<l<<"\n";
    //bool impase=true;
    //double right, left, down, up;
   // Right
    if(l+1<L)
    {
        if (a[w][l+1] == 0)//we have not been there
        {
            ++fg;
            a[w][l+1]+=fg;  // check that we were there
            f(a, w, l+1, ec-1); // we go there
        }
 /*       else{
            if (ec == 0) // we have finished the travel
            {
                return length_to_base(w, l);
                //TODO end the journey
            }
        }*/
    }


    // Down
    if(w+1<W)
    {
        if (a[w+1][l] == 0)//we have not been there
        {
            ++fg;
            a[w+1][l]+=fg;  // check that we were there
            f(a, w+1, l, ec-1);
        }
/*        else{
            if (ec == 0) // we have finished the travel
            {
                return length_to_base(w, l);
                //TODO end the journey
            }
        }
*/
    }


    //Left
    if(l-1>=0)
    {
        if (a[w][l-1] == 0) //we have not been there
        {
            ++fg;
            a[w][l-1]+=fg;  // check that we were there
            f(a, w, l-1, ec-1);
        }

/*        else{
            if (ec == 0) // we have finished the travel
            {
                return length_to_base(w, l);
                //TODO end the journey
            }
        }*/
    }
    //Up
    if(w-1>=0)
    {
        if (a[w-1][l] == 0)//we have not been there
        {
            ++fg;
            a[w-1][l]+=fg;  // check that we were there
            f(a, w-1, l, ec-1);
        }
        /*else{
            if (ec == 0) // we have finished the travel
            {
                return length_to_base(w, l);
                //TODO end the journey
            }
        }*/
    }

    if (ec==1){
        if (w!=0 or l!=0)//we are at base
        {
            cout<<length_to_base(w, l);
        }
    }
    //return f(w, l+1) < f(w+1, l) ? f(w, l+1) : f(w+1, l)
}

int main()
{
    //pair<double, double>* default_pair = new pair<double, double>(50    123456, 27.213456);
    int zero=0;
    vector<int> default_vector(L, zero);

    vector<vector<int>> a(W, default_vector);//std::vector<pair<double, double>>(N, &default_pair)

    for (int i=0; i<W; ++i)
    {
        for (int j=0; j<L; ++j)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";



    }
    for (int i=0; i<W; ++i)
    {
        for (int j=0; j<L; ++j)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";



    }
    fg=0;
    cout<<f(a, 0, 0, L*W)<<'\n';
    for (int i=0; i<W; ++i)
    {
        for (int j=0; j<L; ++j)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";



    }
    return 0;
}
//todo delete fg
