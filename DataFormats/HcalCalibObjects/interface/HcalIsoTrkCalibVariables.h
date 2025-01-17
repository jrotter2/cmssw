#ifndef DataFormatsHcalCalibObjectsHcalIsoTrkCalibVariables_h
#define DataFormatsHcalCalibObjectsHcalIsoTrkCalibVariables_h
#include <string>
#include <vector>

class HcalIsoTrkCalibVariables {
public:
  HcalIsoTrkCalibVariables() { clear(); }

  void clear() {
    eventWeight_ = rhoh_ = 0;
    nVtx_ = goodPV_ = nTrk_ = 0;
    trgbits_.clear();
    mindR1_ = l1pt_ = l1eta_ = l1phi_ = 0;
    mindR2_ = l3pt_ = l3eta_ = l3phi_ = 0;
    p_ = pt_ = phi_ = gentrackP_ = 0;
    ieta_ = iphi_ = 0;
    eMipDR_.clear();
    eHcal_ = eHcal10_ = eHcal30_ = 0;
    emaxNearP_ = eAnnular_ = hmaxNearP_ = hAnnular_ = 0;
    selectTk_ = qltyFlag_ = qltyMissFlag_ = qltyPVFlag_ = false;
    detIds_.clear();
    hitEnergies_.clear();
    detIds1_.clear();
    hitEnergies1_.clear();
    detIds3_.clear();
    hitEnergies3_.clear();
  };

  double eventWeight_, rhoh_;
  int goodPV_, nVtx_, nTrk_;
  std::vector<bool> trgbits_;
  double mindR1_, l1pt_, l1eta_, l1phi_;
  double mindR2_, l3pt_, l3eta_, l3phi_;
  double p_, pt_, phi_, gentrackP_;
  int ieta_, iphi_;
  std::vector<double> eMipDR_;
  double eHcal_, eHcal10_, eHcal30_;
  double emaxNearP_, eAnnular_, hmaxNearP_, hAnnular_;
  bool selectTk_, qltyFlag_, qltyMissFlag_, qltyPVFlag_;
  std::vector<unsigned int> detIds_, detIds1_, detIds3_;
  std::vector<double> hitEnergies_, hitEnergies1_, hitEnergies3_;
};

typedef std::vector<HcalIsoTrkCalibVariables> HcalIsoTrkCalibVariablesCollection;
#endif
