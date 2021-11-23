#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> gq, int counter)
{
    queue<int> g = gq;
    cout << "Frame " << counter << ": ";
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

void showq(queue<int> gq, int p, int counter)
{
    queue<int> g = gq;
    cout << "Frame " << counter << ": ";
    cout << '\t';
    while(g.front()!=p)
    {
        cout << '\t';
        g.pop();
    }
    cout << "Hit" << endl;
}

int pageFaults(int pages[], int n, int capacity)
{

    unordered_set<int> s;
  
    queue<int> indexes;
  
    int page_faults = 0;
    int hits = 0;
    for (int i=0; i<n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
  
                page_faults++;
  
                indexes.push(pages[i]);
                
                showq(indexes, i+1);
            }
            else
            {
                hits++;
                showq(indexes, pages[i], i+1);
            }
        }
        
  
        else
        {

            if (s.find(pages[i]) == s.end())
            {

                int val = indexes.front();
                  
                indexes.pop();
  
                s.erase(val);
  
                s.insert(pages[i]);
  
                indexes.push(pages[i]);
  
                page_faults++;
                
                showq(indexes, i+1);
            }
            else
            {
                {
                    hits++;
                    showq(indexes, pages[i], i+1);
                }
            }
        }
    }

    double c;
    c = (double)page_faults/(double)n;

    double f;
    f = (double)hits/(double)n;

    cout << "Page faults: " << page_faults << endl;
    cout << "Fault Ratio: " << c << endl;
    cout << "Hit Ratio: " << f << endl;
  
    return page_faults;
}

int main()
{
    int n, capacity;
    cout << "Enter Capacity: ";
    cin >> capacity;
    cout << "Enter number of pages: ";
    cin >> n;
    int pages[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter page " << i+1 << " :";
        cin >> pages[i];
    }
    
    pageFaults(pages, n, capacity);
    return 0;
}