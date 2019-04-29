// Analysis class of V0s -- final results calculating and plotting sub-class
// OliverM 2019 Lund

#ifndef __MyAnalysisV0plot__
#define __MyAnalysisV0plot__

#include "TObject.h"
#include "TString.h"
#include "../MyAnalysis.h"
#include "MyAnalysisV0.h"

class TFile;	// forward declaration
class TList;
class TH1D;
class TH2D;
class MyV0;
class MyEvent;
class MyTrack;
class MyParticle;


class MyAnalysisV0plot: public MyAnalysis {

	public:
		//MyAnalysisV0plot();
		MyAnalysisV0plot();	
		~MyAnalysisV0plot() { }
		Int_t Init();
		Int_t Make(Int_t iEv);
		Int_t Finish();
		Bool_t BorrowHistograms();
		Bool_t CreateHistograms();
		Bool_t CloneHistograms();

		void MakeFinalFigures();

		ClassDef(MyAnalysisV0plot,1);

	protected:

		TString mOutName;
		//TFile* mFileOut;
		TFile* mFileMC;
		TList* mList;

		// V0 HISTOGRAMS
		//borrowed
		TH1D* hEventSpherocity;
		TH1D* hV0PtFitCorr[V0consts::NSPECIES][V0consts::NTYPE][V0consts::NMULTI][V0consts::NSPHERO];

		//owned
		TH1D* hBtoM[2][V0consts::NSPHERO];

};
#endif