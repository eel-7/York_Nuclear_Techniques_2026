void demoHistogram(int nEvents)
{
    TCanvas * c2 = new TCanvas("c", "c", 600, 600);
    auto demo = new TH1F("h", "h", 160, -40, 40);
    TRandom3 r;
    for (int i=0;i<nEvents;i++) {
        demo->Fill(r.Gaus(0,7));
    }
    demo->Draw();
    demo->Fit("gaus");
    c2->Draw();
}
