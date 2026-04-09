// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invalidateGridArea
// Entry Point: 00745bc8
// Size: 308 bytes
// Signature: undefined __thiscall invalidateGridArea(VehicleNavigationPlanner * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* VehicleNavigationPlanner::invalidateGridArea(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
VehicleNavigationPlanner::invalidateGridArea
          (VehicleNavigationPlanner *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  
  Mutex::enterCriticalSection();
  lVar4 = *(long *)(this + 0x68);
  if (*(long *)(this + 0x70) != lVar4) {
    uVar1 = *(ulong *)(this + 0x80);
    lVar2 = *(long *)(this + 0x88);
    pplVar6 = (long **)(lVar4 + (uVar1 >> 6 & 0x3fffffffffffff8));
    lVar4 = *(long *)(lVar4 + (lVar2 + uVar1 >> 6 & 0x3fffffffffffff8));
    plVar7 = *pplVar6 + (uVar1 & 0x1ff);
    while (plVar7 != (long *)(lVar4 + (lVar2 + uVar1 & 0x1ff) * 8)) {
      lVar5 = *plVar7;
                    /* try { // try from 00745c74 to 00745c87 has its CatchHandler @ 00745d00 */
      if ((*(short *)(lVar5 + 0x1376) != -1) &&
         (uVar3 = SearchTree::touchesGridArea
                            ((SearchTree *)(lVar5 + 0x28),param_1,param_2,param_3,param_4),
         (uVar3 & 1) != 0)) {
        *(undefined4 *)(lVar5 + 0x1376) = 0xffffffff;
        *(undefined2 *)(lVar5 + 0x137a) = 0xffff;
      }
      plVar7 = plVar7 + 1;
      if ((long)plVar7 - (long)*pplVar6 == 0x1000) {
        pplVar6 = pplVar6 + 1;
        plVar7 = *pplVar6;
      }
    }
  }
  if (*(long *)(this + 0x90) != 0) {
    this[0xce] = (VehicleNavigationPlanner)0x1;
    *(undefined4 *)(this + 0xcc) = 1;
  }
                    /* try { // try from 00745cd4 to 00745cdb has its CatchHandler @ 00745cfc */
  Mutex::leaveCriticalSection();
  return;
}


