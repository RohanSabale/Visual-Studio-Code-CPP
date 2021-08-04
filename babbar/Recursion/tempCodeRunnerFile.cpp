cout<<"enter size";
    int size;
    cin>>size;

    vector<int>vec(size);
    vector<int>subset;

    cout<<"Enter elements"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>vec[i];
    }
    cout<<"Power set is as floows"<<endl;
    printsubset(vec ,subset ,0);