// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Concavity
// Entry Point: 00d467dc
// Size: 352 bytes
// Signature: undefined __thiscall Concavity(HACD * this, ICHull * param_1, map * param_2)


/* HACD::HACD::Concavity(HACD::ICHull&, std::__ndk1::map<long, HACD::DPoint,
   std::__ndk1::less<long>, std::__ndk1::allocator<std::__ndk1::pair<long const, HACD::DPoint> > >&)
    */

undefined  [16] __thiscall HACD::HACD::Concavity(HACD *this,ICHull *param_1,map *param_2)

{
  map *pmVar1;
  ulong uVar2;
  Vec3 *pVVar3;
  Vec3 *pVVar4;
  long lVar5;
  map **ppmVar6;
  long lVar7;
  map **ppmVar8;
  map *pmVar9;
  long lVar10;
  map **ppmVar11;
  map *pmVar12;
  undefined auVar13 [16];
  
  if (*(map ***)param_2 == (map **)(param_2 + 8)) {
    pmVar12 = (map *)0x0;
  }
  else {
    lVar10 = *(long *)(this + 0x60);
    ppmVar11 = *(map ***)param_2;
    pmVar9 = (map *)0x0;
    do {
      if (*(char *)(ppmVar11 + 7) == '\0') {
        pmVar12 = ppmVar11[4];
        pmVar1 = pmVar12 + -lVar10;
        if ((long)pmVar12 < lVar10) {
          if ((long)pmVar12 < 0) {
            pVVar3 = (Vec3 *)(*(long *)(this + 0x20) + ~(ulong)pmVar12 * 0x18);
            pVVar4 = (Vec3 *)(*(long *)(this + 0x28) + ~(ulong)pmVar12 * 0x18);
          }
          else {
            lVar5 = *(long *)(this + 0x18);
            lVar7 = *(long *)(this + 0x30);
            pmVar1 = pmVar12;
LAB_00d46890:
            pVVar3 = (Vec3 *)(lVar5 + (long)pmVar1 * 0x18);
            pVVar4 = (Vec3 *)(lVar7 + (long)pmVar1 * 0x18);
          }
          pmVar12 = (map *)ICHull::ComputeDistance
                                     (param_1,(long)pmVar12,pVVar3,pVVar4,(bool *)(ppmVar11 + 7),
                                      true);
        }
        else {
          uVar2 = ICHull::IsInside(param_1,(Vec3 *)(*(long *)(this + 0x38) + (long)pmVar1 * 0x18),
                                   -0.001);
          pmVar12 = (map *)0x0;
          if ((uVar2 & 1) != 0) {
            lVar5 = *(long *)(this + 0x38);
            lVar7 = *(long *)(this + 0x40);
            pmVar12 = ppmVar11[4];
            goto LAB_00d46890;
          }
        }
      }
      else {
        pmVar12 = ppmVar11[6];
      }
      if ((double)pmVar12 <= (double)pmVar9) {
        pmVar12 = pmVar9;
      }
      ppmVar6 = (map **)ppmVar11[1];
      if ((map **)ppmVar11[1] == (map **)0x0) {
        ppmVar6 = ppmVar11 + 2;
        ppmVar8 = (map **)*ppmVar6;
        if ((map **)*ppmVar8 != ppmVar11) {
          do {
            pmVar9 = *ppmVar6;
            ppmVar6 = (map **)(pmVar9 + 0x10);
            ppmVar8 = (map **)*ppmVar6;
          } while (*ppmVar8 != pmVar9);
        }
      }
      else {
        do {
          ppmVar8 = ppmVar6;
          ppmVar6 = (map **)*ppmVar8;
        } while ((map **)*ppmVar8 != (map **)0x0);
      }
      ppmVar11 = ppmVar8;
      pmVar9 = pmVar12;
    } while (ppmVar8 != (map **)(param_2 + 8));
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = pmVar12;
  return auVar13;
}


