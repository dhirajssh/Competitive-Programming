#include <iostream>
#include <string>
using namespace std;


void senderFunction()
{
    int n_frames;
    string final_frame;
    cout << "Enter number of frames: ";
    cin >> n_frames;
    int j = 0;

    for(int i=0;i<n_frames;i++)
    {
        cout << "Enter frame " << i+1 << ": ";
        string frame;
        cin >> frame;
        frame.insert(0, to_string(frame.length()+1));
        final_frame.insert(j, frame);
        j+=frame.length();
        cout << endl;
    }

    cout << "The Receiver code is: " << final_frame;   
}

void receiverFunction()
{
    string receivedFrame;
    cout << "Enter the received frame: ";
    cin >> receivedFrame;
    int len = receivedFrame.length();
    int iter = 0;
    int counter = 1;
    while(iter<len)
    {
        char a = receivedFrame[iter];
        int x = atoi(&a);
        cout << "Frame " << counter << " : ";
        for(int i = iter+1;i<iter+x;i++)
        {
            cout << receivedFrame[i];
        }
        cout << endl;
        iter+=x;
        counter++;
    }

}

int main()
{
    int option;
    cout << "Enter 1 for sending, or 2 for receiving: ";
    cin >> option;

    if(option==1)
    {
        senderFunction();
    }
    else{
        receiverFunction();
    }
}