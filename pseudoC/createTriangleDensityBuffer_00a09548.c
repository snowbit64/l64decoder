// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTriangleDensityBuffer
// Entry Point: 00a09548
// Size: 264 bytes
// Signature: undefined __thiscall createTriangleDensityBuffer(RenderController * this, GsShape * param_1)


/* RenderController::createTriangleDensityBuffer(GsShape const*) */

void __thiscall
RenderController::createTriangleDensityBuffer(RenderController *this,GsShape *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  IndexedTriangleSet *pIVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  if ((((byte)param_1[0x11] >> 4 & 1) != 0) || (lVar3 = *(long *)(param_1 + 0x170), lVar3 == 0)) {
    return;
  }
  uVar5 = *(ulong *)(this + 0x2a8);
  uVar1 = *(uint *)(lVar3 + 0x28);
  uVar10 = (ulong)uVar1;
  if (uVar5 != 0) {
    uVar12 = NEON_cnt(uVar5,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar13 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11);
    if ((uVar13 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar5 - 1U & uVar1);
    }
    else {
      uVar6 = uVar10;
      if (uVar5 <= uVar10) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar10 / uVar5;
        }
        uVar6 = uVar10 - uVar6 * uVar5;
      }
    }
    pplVar7 = *(long ***)(*(long *)(this + 0x2a0) + uVar6 * 8);
    if ((pplVar7 != (long **)0x0) && (plVar8 = *pplVar7, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar10) {
          if (*(uint *)(plVar8 + 2) == uVar1) {
            return;
          }
        }
        else {
          if ((uVar13 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar2 * uVar5;
          }
          if (uVar9 != uVar6) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  if ((*(uint *)(lVar3 + 0x30) & 1) == 0) {
    if ((*(uint *)(lVar3 + 0x30) >> 9 & 1) == 0) {
      return;
    }
    pIVar4 = *(IndexedTriangleSet **)(*(long *)(lVar3 + 0x68) + 0x28);
  }
  else {
    pIVar4 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
  }
  createTriangleDensityBufferFromIndexedTriangleSet(this,uVar1,pIVar4);
  return;
}


