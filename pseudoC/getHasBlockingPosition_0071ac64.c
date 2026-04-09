// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHasBlockingPosition
// Entry Point: 0071ac64
// Size: 496 bytes
// Signature: undefined __thiscall getHasBlockingPosition(TrafficSystem * this, float param_1, float param_2, uint param_3, float param_4, uint param_5)


/* WARNING: Removing unreachable block (ram,0x0071adf0) */
/* TrafficSystem::getHasBlockingPosition(float, float, unsigned int, float, unsigned int) */

bool __thiscall
TrafficSystem::getHasBlockingPosition
          (TrafficSystem *this,float param_1,float param_2,uint param_3,float param_4,uint param_5)

{
  TrafficSystem **ppTVar1;
  bool bVar2;
  long lVar3;
  TrafficSystem **ppTVar4;
  TrafficSystem *pTVar5;
  TrafficSystem **ppTVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pTVar5 = *(TrafficSystem **)(this + 0x4ce0);
  if (pTVar5 != (TrafficSystem *)0x0) {
    ppTVar1 = (TrafficSystem **)(this + 0x4ce0);
    ppTVar6 = ppTVar1;
    do {
      if (*(uint *)(pTVar5 + 0x1c) >= param_3) {
        ppTVar6 = (TrafficSystem **)pTVar5;
      }
      pTVar5 = *(TrafficSystem **)(pTVar5 + (ulong)(*(uint *)(pTVar5 + 0x1c) < param_3) * 8);
    } while (pTVar5 != (TrafficSystem *)0x0);
    if ((ppTVar6 != ppTVar1) && (*(uint *)((long)ppTVar6 + 0x1c) <= param_3)) {
      lVar7 = *(long *)(this + 0x4ca0) + (ulong)*(uint *)((long)ppTVar6 + 0x20) * 0x88;
      plVar8 = (long *)(lVar7 + 0x58);
      lVar3 = *plVar8;
      plVar9 = (long *)(lVar7 + 0x60);
      if (lVar3 != *plVar9) {
        uVar10 = 0;
        do {
          fVar11 = *(float *)(lVar3 + uVar10 * 4);
          fVar12 = (float)Spline::getLength();
          fVar12 = (fVar11 - param_4) * fVar12;
          if (param_1 < fVar12 && fVar12 < param_2 || param_1 < fVar12 && fVar12 == param_2) {
            return true;
          }
          uVar10 = (ulong)((int)uVar10 + 1);
          lVar3 = *plVar8;
        } while (uVar10 < (ulong)(*plVar9 - lVar3 >> 2));
        fVar11 = (float)Spline::getLength();
        fVar11 = (1.0 - param_4) * fVar11;
        if ((param_2 < fVar11) &&
           (ppTVar6 = (TrafficSystem **)*ppTVar1, ppTVar6 != (TrafficSystem **)0x0)) {
          fVar12 = (float)NEON_fminnm(param_1 - fVar11,0);
          ppTVar4 = ppTVar1;
          do {
            bVar2 = *(uint *)((long)ppTVar6 + 0x1c) < param_5;
            if (!bVar2) {
              ppTVar4 = ppTVar6;
            }
            ppTVar6 = (TrafficSystem **)ppTVar6[bVar2];
          } while (ppTVar6 != (TrafficSystem **)0x0);
          if ((ppTVar4 != ppTVar1) && (*(uint *)((long)ppTVar4 + 0x1c) <= param_5)) {
            lVar7 = *(long *)(this + 0x4ca0) + (ulong)*(uint *)(ppTVar4 + 4) * 0x88;
            plVar8 = (long *)(lVar7 + 0x58);
            lVar3 = *plVar8;
            plVar9 = (long *)(lVar7 + 0x60);
            if (lVar3 != *plVar9) {
              uVar10 = 0;
              do {
                fVar14 = *(float *)(lVar3 + uVar10 * 4);
                fVar13 = (float)Spline::getLength();
                fVar14 = fVar14 * fVar13;
                uVar10 = (ulong)((int)uVar10 + 1);
                lVar3 = *plVar8;
              } while (uVar10 < (ulong)(*plVar9 - lVar3 >> 2));
              return fVar12 < fVar14 && fVar14 <= param_2 - fVar11;
            }
          }
        }
      }
    }
  }
  return false;
}


