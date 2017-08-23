{
//========= Macro generated from object: tpcMainVtxTracks/tpcMainVtxTracks
//========= by ROOT version6.08/06
   
   TProfile2D *tpcMainVtxTracks = new TProfile2D("tpcMainVtxTracks","tpcMainVtxTracks",200,-100,100,200,-100,100,0,10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   tpcMainVtxTracks->SetLineColor(ci);
   tpcMainVtxTracks->GetXaxis()->SetLabelFont(42);
   tpcMainVtxTracks->GetXaxis()->SetLabelSize(0.035);
   tpcMainVtxTracks->GetXaxis()->SetTitleSize(0.035);
   tpcMainVtxTracks->GetXaxis()->SetTitleFont(42);
   tpcMainVtxTracks->GetYaxis()->SetLabelFont(42);
   tpcMainVtxTracks->GetYaxis()->SetLabelSize(0.035);
   tpcMainVtxTracks->GetYaxis()->SetTitleSize(0.035);
   tpcMainVtxTracks->GetYaxis()->SetTitleFont(42);
   tpcMainVtxTracks->GetZaxis()->SetLabelFont(42);
   tpcMainVtxTracks->GetZaxis()->SetLabelSize(0.035);
   tpcMainVtxTracks->GetZaxis()->SetTitleSize(0.035);
   tpcMainVtxTracks->GetZaxis()->SetTitleFont(42);
   tpcMainVtxTracks->Draw("");
}
