// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessPoint
// Entry Point: 00ead9d0
// Size: 476 bytes
// Signature: undefined ProcessPoint(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VHACD::ICHull::ProcessPoint() */

uint VHACD::ICHull::ProcessPoint(void)

{
  int iVar1;
  ICHull *pIVar2;
  long lVar3;
  uint uVar4;
  ICHull *in_x0;
  ICHull *pIVar5;
  undefined8 uVar6;
  CircularListElement *pCVar7;
  CircularListElement **ppCVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  CircularListElement *pCVar12;
  ICHull *pIVar13;
  CircularListElement *pCVar14;
  CircularListElement *pCVar15;
  double local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0.0;
  uVar4 = ComputePointVolume(in_x0,&local_70,true);
  if ((uVar4 & 1) != 0) {
    pCVar15 = *(CircularListElement **)(in_x0 + 0x18);
    pCVar7 = *(CircularListElement **)(in_x0 + 8);
    *(undefined8 *)(in_x0 + 0x240) = 0;
    *(undefined8 *)(in_x0 + 0x458) = 0;
    pCVar12 = pCVar15;
    do {
      pCVar14 = *(CircularListElement **)(pCVar12 + 0x30);
      iVar1 = (uint)*(byte *)(*(long *)(pCVar12 + 8) + 0x38) +
              (uint)*(byte *)(*(long *)(pCVar12 + 0x10) + 0x38);
      if (iVar1 == 1) {
        uVar6 = MakeConeFace(in_x0,pCVar12,pCVar7);
        *(undefined8 *)(pCVar12 + 0x28) = uVar6;
        uVar10 = *(ulong *)(in_x0 + 0x458);
        uVar11 = *(ulong *)(in_x0 + 0x460);
        if (uVar10 == uVar11) {
          uVar11 = uVar10 << 1;
          uVar9 = uVar10 << 4;
          if (uVar11 >> 0x3d != 0) {
            uVar9 = 0xffffffffffffffff;
          }
          pIVar5 = (ICHull *)operator_new__(uVar9);
          pIVar13 = *(ICHull **)(in_x0 + 0x450);
          pIVar2 = in_x0 + 0x250;
          if (uVar10 != 0x40) {
            pIVar2 = pIVar13;
          }
          memcpy(pIVar5,pIVar2,uVar10 << 3);
          if (pIVar13 != (ICHull *)0x0) {
            operator_delete__(pIVar13);
            uVar10 = *(ulong *)(in_x0 + 0x458);
          }
          *(ICHull **)(in_x0 + 0x450) = pIVar5;
          *(ulong *)(in_x0 + 0x460) = uVar11;
        }
        else {
          pIVar5 = *(ICHull **)(in_x0 + 0x450);
        }
        pIVar2 = in_x0 + 0x250;
        if (uVar11 != 0x40) {
          pIVar2 = pIVar5;
        }
        ppCVar8 = (CircularListElement **)(pIVar2 + uVar10 * 8);
        *(ulong *)(in_x0 + 0x458) = uVar10 + 1;
LAB_00eada58:
        *ppCVar8 = pCVar12;
      }
      else if (iVar1 == 2) {
        uVar10 = *(ulong *)(in_x0 + 0x240);
        uVar11 = *(ulong *)(in_x0 + 0x248);
        if (uVar10 == uVar11) {
          uVar11 = uVar10 << 1;
          uVar9 = uVar10 << 4;
          if (uVar11 >> 0x3d != 0) {
            uVar9 = 0xffffffffffffffff;
          }
          pIVar5 = (ICHull *)operator_new__(uVar9);
          pIVar13 = *(ICHull **)(in_x0 + 0x238);
          pIVar2 = in_x0 + 0x38;
          if (uVar10 != 0x40) {
            pIVar2 = pIVar13;
          }
          memcpy(pIVar5,pIVar2,uVar10 << 3);
          if (pIVar13 != (ICHull *)0x0) {
            operator_delete__(pIVar13);
            uVar10 = *(ulong *)(in_x0 + 0x240);
          }
          *(ICHull **)(in_x0 + 0x238) = pIVar5;
          *(ulong *)(in_x0 + 0x248) = uVar11;
        }
        else {
          pIVar5 = *(ICHull **)(in_x0 + 0x238);
        }
        pIVar2 = in_x0 + 0x38;
        if (uVar11 != 0x40) {
          pIVar2 = pIVar5;
        }
        ppCVar8 = (CircularListElement **)(pIVar2 + uVar10 * 8);
        *(ulong *)(in_x0 + 0x240) = uVar10 + 1;
        goto LAB_00eada58;
      }
      pCVar12 = pCVar14;
    } while (pCVar14 != pCVar15);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


