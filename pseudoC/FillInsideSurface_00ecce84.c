// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillInsideSurface
// Entry Point: 00ecce84
// Size: 292 bytes
// Signature: undefined FillInsideSurface(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::Volume::FillInsideSurface() */

void VHACD::Volume::FillInsideSurface(void)

{
  long *in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  plVar8 = *(long **)(*in_x0 + 0x30);
  if (plVar8 != (long *)0x0 && DAT_0212339c == 0) {
    DAT_0212339c = (**(code **)(*plVar8 + 0x10))(plVar8,"VHACDVolume::FillInsideSurface");
    plVar8 = *(long **)(*in_x0 + 0x30);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8,DAT_0212339c);
  }
  lVar1 = in_x0[8];
  if (((lVar1 != 0) && (lVar2 = in_x0[9], lVar2 != 0)) && (lVar3 = in_x0[10], lVar3 != 0)) {
    lVar4 = 0;
    do {
      lVar5 = 0;
      do {
        lVar6 = 0;
        do {
          lVar7 = in_x0[0xe] + in_x0[10] * (lVar5 + lVar4 * in_x0[9]);
          if (*(char *)(lVar7 + lVar6) == '\0') {
            *(undefined *)(lVar7 + lVar6) = 3;
            in_x0[0xc] = in_x0[0xc] + 1;
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
        lVar5 = lVar5 + 1;
      } while (lVar5 != lVar2);
      lVar4 = lVar4 + 1;
    } while (lVar4 != lVar1);
  }
  if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00eccf94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x20))(plVar8);
    return;
  }
  return;
}


