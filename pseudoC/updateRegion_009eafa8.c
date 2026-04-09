// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 009eafa8
// Size: 888 bytes
// Signature: undefined __thiscall updateRegion(ProceduralPlacementThresholdMask * this, uint param_1, uint param_2, uint param_3, uint param_4)


/* ProceduralPlacementThresholdMask::updateRegion(unsigned int, unsigned int, unsigned int, unsigned
   int) */

void __thiscall
ProceduralPlacementThresholdMask::updateRegion
          (ProceduralPlacementThresholdMask *this,uint param_1,uint param_2,uint param_3,
          uint param_4)

{
  ulong uVar1;
  ProceduralPlacementThresholdMask PVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ProceduralPlacementThresholdMask *pPVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  
  plVar10 = **(long ***)(this + 0x88);
  uVar7 = (**(code **)(*plVar10 + 0x58))(plVar10);
  iVar4 = (**(code **)(*plVar10 + 0x40))(plVar10);
  pPVar13 = this + 0xb0;
  PVar2 = *pPVar13;
  uVar8 = *(ulong *)(this + 0xb8);
  uVar9 = (ulong)((byte)PVar2 >> 1);
  uVar1 = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    uVar1 = uVar8;
  }
  if (uVar1 == 1) {
                    /* try { // try from 009eb034 to 009eb04f has its CatchHandler @ 009eb324 */
    iVar5 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)pPVar13,0,(char *)0xffffffffffffffff,0x4eb0ab);
    if (iVar5 == 0) {
      if (param_4 <= param_3) {
        return;
      }
      iVar5 = iVar4 * param_3;
      do {
        uVar12 = param_1;
        if (param_1 < param_2) {
          do {
            if ((uVar7 & 1) == 0) {
              lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10);
              fVar15 = *(float *)(lVar11 + (ulong)(iVar5 + uVar12) * 4);
            }
            else {
              fVar15 = (float)(**(code **)(*plVar10 + 0x68))(plVar10,uVar12,param_3);
            }
            iVar14 = *(int *)(this + 200);
            lVar11 = *(long *)(this + 0x58);
            iVar6 = (**(code **)(*plVar10 + 0x40))(plVar10);
            uVar3 = uVar12 + iVar6 * param_3;
            uVar12 = uVar12 + 1;
            uVar16 = 0x437f0000;
            if (fVar15 <= (float)iVar14) {
              uVar16 = 0;
            }
            *(undefined4 *)(lVar11 + (ulong)uVar3 * 4) = uVar16;
          } while (param_2 != uVar12);
        }
        param_3 = param_3 + 1;
        iVar5 = iVar5 + iVar4;
      } while (param_3 != param_4);
      return;
    }
    PVar2 = this[0xb0];
    uVar8 = *(ulong *)(this + 0xb8);
    uVar9 = (ulong)((byte)PVar2 >> 1);
  }
  if (((byte)PVar2 & 1) != 0) {
    uVar9 = uVar8;
  }
                    /* try { // try from 009eb074 to 009eb08f has its CatchHandler @ 009eb320 */
  if ((uVar9 == 2) &&
     (iVar5 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)pPVar13,0,(char *)0xffffffffffffffff,0x4eb0ad), iVar5 == 0)) {
    if (param_3 < param_4) {
      iVar5 = iVar4 * param_3;
      do {
        uVar12 = param_1;
        if (param_1 < param_2) {
          do {
            if ((uVar7 & 1) == 0) {
              lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10);
              fVar15 = *(float *)(lVar11 + (ulong)(iVar5 + uVar12) * 4);
            }
            else {
              fVar15 = (float)(**(code **)(*plVar10 + 0x68))(plVar10,uVar12,param_3);
            }
            iVar14 = *(int *)(this + 200);
            lVar11 = *(long *)(this + 0x58);
            iVar6 = (**(code **)(*plVar10 + 0x40))(plVar10);
            uVar3 = uVar12 + iVar6 * param_3;
            uVar12 = uVar12 + 1;
            uVar16 = 0x437f0000;
            if (fVar15 != (float)iVar14) {
              uVar16 = 0;
            }
            *(undefined4 *)(lVar11 + (ulong)uVar3 * 4) = uVar16;
          } while (param_2 != uVar12);
        }
        param_3 = param_3 + 1;
        iVar5 = iVar5 + iVar4;
      } while (param_3 != param_4);
    }
  }
  else if (param_3 < param_4) {
    iVar5 = iVar4 * param_3;
    do {
      uVar12 = param_1;
      if (param_1 < param_2) {
        do {
          if ((uVar7 & 1) == 0) {
            lVar11 = (**(code **)(*plVar10 + 0x50))(plVar10);
            fVar15 = *(float *)(lVar11 + (ulong)(iVar5 + uVar12) * 4);
          }
          else {
            fVar15 = (float)(**(code **)(*plVar10 + 0x68))(plVar10,uVar12,param_3);
          }
          iVar14 = *(int *)(this + 200);
          lVar11 = *(long *)(this + 0x58);
          iVar6 = (**(code **)(*plVar10 + 0x40))(plVar10);
          uVar3 = uVar12 + iVar6 * param_3;
          uVar12 = uVar12 + 1;
          uVar16 = 0x437f0000;
          if ((float)iVar14 <= fVar15) {
            uVar16 = 0;
          }
          *(undefined4 *)(lVar11 + (ulong)uVar3 * 4) = uVar16;
        } while (param_2 != uVar12);
      }
      param_3 = param_3 + 1;
      iVar5 = iVar5 + iVar4;
    } while (param_3 != param_4);
  }
  return;
}


