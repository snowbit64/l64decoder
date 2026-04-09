// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: configureFoliageBendingSystem
// Entry Point: 00a61610
// Size: 484 bytes
// Signature: undefined __thiscall configureFoliageBendingSystem(FoliageLayerGraphics * this, FoliageBendingSystem * param_1, DensityMap * param_2)


/* FoliageLayerGraphics::configureFoliageBendingSystem(FoliageBendingSystem*, DensityMap*) */

void __thiscall
FoliageLayerGraphics::configureFoliageBendingSystem
          (FoliageLayerGraphics *this,FoliageBendingSystem *param_1,DensityMap *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar9) {
    uVar8 = 0;
    do {
      uVar2 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
      lVar9 = lVar9 + uVar8 * 0x58;
      lVar3 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar9 + 0x38) != lVar3) {
        uVar7 = 0;
        do {
          lVar6 = lVar3 + uVar7 * 0x58;
          lVar5 = *(long *)(lVar6 + 0x38);
          lVar6 = *(long *)(lVar6 + 0x40);
          if (lVar5 != lVar6) {
            fVar12 = 0.0;
            do {
              fVar11 = fVar12;
              if ((*(long *)(lVar5 + 8) != *(long *)(lVar5 + 0x10)) &&
                 (fVar11 = *(float *)(*(long *)(lVar5 + 8) + 0x14), fVar11 <= fVar12)) {
                fVar11 = fVar12;
              }
              fVar12 = fVar11;
              lVar5 = lVar5 + 0x20;
            } while (lVar5 != lVar6);
            if (0.0 < fVar12) {
              lVar3 = lVar3 + uVar7 * 0x58;
              if (*(int *)(lVar9 + 0x20) == -1) {
                uVar10 = 1;
                do {
                  FoliageBendingSystem::setHeightForTypeAndState
                            (param_1,param_2,(char)uVar10 + 0xff,*(uint *)(lVar9 + 0x24),
                             *(uint *)(lVar9 + 0x28),(char)uVar7 + '\x01',
                             fVar12 * *(float *)(lVar3 + 0xc));
                  uVar1 = uVar10 >> (ulong)(uVar2 & 0x1f);
                  uVar10 = uVar10 + 1;
                } while (uVar1 == 0);
              }
              else {
                FoliageBendingSystem::setHeightForTypeAndState
                          (param_1,param_2,(uchar)*(int *)(lVar9 + 0x20),*(uint *)(lVar9 + 0x24),
                           *(uint *)(lVar9 + 0x28),(char)uVar7 + '\x01',
                           fVar12 * *(float *)(lVar3 + 0xc));
              }
            }
          }
          uVar7 = (ulong)((int)uVar7 + 1);
          lVar3 = *(long *)(lVar9 + 0x30);
          uVar4 = (*(long *)(lVar9 + 0x38) - lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3;
        } while (uVar7 <= uVar4 && uVar4 - uVar7 != 0);
      }
      lVar9 = *(long *)(this + 8);
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar7 = (*(long *)(this + 0x10) - lVar9 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar8 <= uVar7 && uVar7 - uVar8 != 0);
  }
  return;
}


