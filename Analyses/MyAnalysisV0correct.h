// Analysis class of V0s -- efficiency correction sub-class
// OliverM 2019 Lund

#ifndef __MyAnalysisV0correct__
#define __MyAnalysisV0correct__

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


class MyAnalysisV0correct: public MyAnalysis {

	public:
		//MyAnalysisV0correct();
		MyAnalysisV0correct();	
		~MyAnalysisV0correct() { }
		Int_t Init();
		Int_t Make(Int_t iEv);
		Int_t Finish();
		Bool_t BorrowHistograms();
		Bool_t CreateHistograms();
		Bool_t CloneHistograms();

		void SetMCInputFile(const Char_t *name);
		void LoadEfficiency();
		void CorrectSpectra();

		ClassDef(MyAnalysisV0correct,1);

	protected:

		TString mOutName;
		//TFile* mFileOut;
		TFile* mFileMC;
		TList* mList;

		// V0 HISTOGRAMS
		//borrowed
		TH1D* hV0PtFit[V0consts::NSPECIES][V0consts::NTYPE][V0consts::NMULTI][V0consts::NSPHERO];
		TH1D* hV0Efficiency[V0consts::NSPECIES];

		//owned
		TH1D* hV0PtFitCorr[V0consts::NSPECIES][V0consts::NTYPE][V0consts::NMULTI][V0consts::NSPHERO];

};
#endif