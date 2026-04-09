// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAdPlacementsThreadFunction
// Entry Point: 00af3164
// Size: 388 bytes
// Signature: undefined __thiscall updateAdPlacementsThreadFunction(GiantsAdsProvider * this, bool * param_1)


/* GiantsAdsProvider::updateAdPlacementsThreadFunction(bool volatile&) */

void __thiscall
GiantsAdsProvider::updateAdPlacementsThreadFunction(GiantsAdsProvider *this,bool *param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  bool *extraout_x1;
  bool *pbVar5;
  uint uVar6;
  int iVar7;
  undefined auVar8 [16];
  AndroidHTTPSRequest aAStack_f8 [160];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_f8);
                    /* try { // try from 00af319c to 00af31df has its CatchHandler @ 00af32f0 */
  uVar3 = AndroidHTTPSRequest::init((char *)aAStack_f8,false,true);
  if ((uVar3 & 1) != 0) {
    AndroidHTTPSRequest::setUserAgent(aAStack_f8,"GIANTS Engine");
    AndroidHTTPSRequest::setReferer(aAStack_f8,"http://www.farming-simulator.com/");
    AndroidHTTPSRequest::setCancelFlag(aAStack_f8,param_1);
    if (*param_1 == false) {
      uVar4 = 0xffffffff;
      uVar6 = 0;
      do {
        while( true ) {
                    /* try { // try from 00af3250 to 00af3257 has its CatchHandler @ 00af32ec */
          Event::wait((Event *)(this + 0x40),uVar4);
          if (*param_1 != false) goto LAB_00af31e8;
          if (((byte)this[0x150] & 1) == 0) {
            bVar2 = false;
            pbVar5 = extraout_x1;
          }
          else {
                    /* try { // try from 00af3274 to 00af32bf has its CatchHandler @ 00af32e8 */
            auVar8 = requestAdContentAsync(this,extraout_x1,aAStack_f8);
            pbVar5 = auVar8._8_8_;
            if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
              *(undefined4 *)(this + 0x150) = 0;
            }
          }
          if (*param_1 != false) goto LAB_00af31e8;
          if ((this[0xd0] != (GiantsAdsProvider)0x0) || (((byte)this[0x1b8] & 1) == 0)) break;
          uVar3 = sendImpressionsAsync(this,pbVar5,aAStack_f8);
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)(this + 0x1b8) = 0;
            break;
          }
LAB_00af3234:
          iVar7 = 5;
          if (uVar6 + 1 < 5) {
            iVar7 = uVar6 + 1;
          }
          uVar4 = iVar7 * 30000;
          uVar6 = uVar6 + 1;
          if (*param_1 != false) goto LAB_00af31e8;
        }
        if (bVar2) goto LAB_00af3234;
        uVar4 = 30000;
        uVar6 = 0;
      } while (*param_1 == false);
    }
  }
LAB_00af31e8:
  AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_f8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


