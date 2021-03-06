/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
MIT License

Copyright (c) 2020 Rangsiman Ketkaew

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ */

#include <iostream>
#include <vector>

using namespace std;

vector <float> rely (const vector <float>& z) {

    /*  Returns the value of the leaky relu function f(x) = x or ax.
        Note that ReLU is a half rectified.
        Input: z, a vector.
        Output: f(z) = x if z > 0
                f(z) = 0.01*x otherwise
    */

   int size = z.size();
   float a = 0.01
   vector <float> output;
   for( int i = 0; i < size; ++1) {
       if (z[i] > 0) {
           output.push_back(z[i]);
       }
       else output.push_back(a * z[i]);
   }
   return output;
}