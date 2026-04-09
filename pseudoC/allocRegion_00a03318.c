// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocRegion
// Entry Point: 00a03318
// Size: 528 bytes
// Signature: undefined __thiscall allocRegion(DividedMap * this, uint param_1, LightSource * param_2, uint param_3, bool param_4, uint param_5)


/* PersistentShadowMap::DividedMap::allocRegion(unsigned int, LightSource const*, unsigned int,
   bool, unsigned int) */

long __thiscall
PersistentShadowMap::DividedMap::allocRegion
          (DividedMap *this,uint param_1,LightSource *param_2,uint param_3,bool param_4,uint param_5
          )

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  uint *this_00;
  int *piVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint **ppuVar9;
  
  if (param_1 <= *(uint *)this) {
    if (*(uint *)this == param_1) {
      if (*(uint *)(this + 0xc) != 0) {
        lVar7 = 0;
        do {
          lVar4 = *(long *)(this + 0x10) + lVar7;
          if ((*(long *)(lVar4 + 0x10) == 0) && (*(long *)(lVar4 + 0x18) == 0)) {
            lVar7 = *(long *)(this + 0x10) + lVar7;
            *(LightSource **)(lVar7 + 0x18) = param_2;
            *(uint *)(lVar7 + 0x20) = param_3;
            *(bool *)(lVar7 + 0x24) = param_4;
            *(undefined *)(lVar7 + 0x30) = 1;
            *(undefined *)(lVar7 + 0x25) = 0;
            *(uint *)(lVar7 + 0x28) = param_5;
            *(undefined4 *)(lVar7 + 0x2c) = 0;
            return lVar7;
          }
          lVar7 = lVar7 + 0x88;
        } while ((ulong)*(uint *)(this + 0xc) * 0x88 - lVar7 != 0);
      }
    }
    else {
      uVar6 = *(uint *)(this + 0xc);
      if (uVar6 != 0) {
        uVar8 = 0;
        lVar7 = 0x10;
        do {
          if (*(DividedMap **)(*(long *)(this + 0x10) + lVar7) != (DividedMap *)0x0) {
            lVar4 = allocRegion(*(DividedMap **)(*(long *)(this + 0x10) + lVar7),param_1,param_2,
                                param_3,param_4,param_5);
            if (lVar4 != 0) {
              return lVar4;
            }
            uVar6 = *(uint *)(this + 0xc);
          }
          uVar8 = uVar8 + 1;
          lVar7 = lVar7 + 0x88;
        } while (uVar8 < uVar6);
        if (uVar6 != 0) {
          uVar8 = 0;
          bVar3 = true;
          ppuVar9 = (uint **)(*(long *)(this + 0x10) + 0x10);
          do {
            if ((*ppuVar9 == (uint *)0x0) && (ppuVar9[1] == (uint *)0x0)) {
              this_00 = (uint *)operator_new(0x18);
              iVar1 = *(int *)(ppuVar9 + -2);
              iVar2 = *(int *)((long)ppuVar9 + -0xc);
              uVar6 = *(uint *)this >> 1;
              *(undefined8 *)(this_00 + 1) = 0x200000002;
              *this_00 = uVar6;
              this_00[3] = 4;
                    /* try { // try from 00a034b0 to 00a034b7 has its CatchHandler @ 00a03528 */
              piVar5 = (int *)operator_new__(0x220);
              *(int **)(this_00 + 4) = piVar5;
              piVar5[2] = uVar6;
              *piVar5 = iVar1;
              piVar5[1] = iVar2;
              *(undefined8 *)(piVar5 + 4) = 0;
              *(undefined8 *)(piVar5 + 6) = 0;
              piVar5[0x24] = uVar6;
              piVar5[0x22] = uVar6 + iVar1;
              piVar5[0x23] = iVar2;
              *(undefined8 *)(piVar5 + 0x26) = 0;
              *(undefined8 *)(piVar5 + 0x28) = 0;
              piVar5[0x44] = iVar1;
              piVar5[0x45] = uVar6 + iVar2;
              piVar5[0x46] = uVar6;
              *(undefined8 *)(piVar5 + 0x48) = 0;
              *(undefined8 *)(piVar5 + 0x4a) = 0;
              piVar5[0x66] = uVar6 + iVar1;
              piVar5[0x67] = uVar6 + iVar2;
              piVar5[0x68] = uVar6;
              *(undefined8 *)(piVar5 + 0x6a) = 0;
              *(undefined8 *)(piVar5 + 0x6c) = 0;
              *ppuVar9 = this_00;
              lVar7 = allocRegion((DividedMap *)this_00,param_1,param_2,param_3,param_4,param_5);
              if (!bVar3) {
                return 0;
              }
              return lVar7;
            }
            uVar8 = uVar8 + 1;
            ppuVar9 = ppuVar9 + 0x11;
            bVar3 = uVar8 < uVar6;
          } while (uVar6 != uVar8);
        }
      }
    }
  }
  return 0;
}


