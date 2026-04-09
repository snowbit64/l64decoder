// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVisibleAreaPoints
// Entry Point: 006f98e8
// Size: 324 bytes
// Signature: undefined __thiscall getVisibleAreaPoints(BillboardShape * this, GsShape * param_1, Renderer * param_2, float * param_3)


/* BillboardShape::getVisibleAreaPoints(GsShape*, Renderer*, float*) */

byte __thiscall
BillboardShape::getVisibleAreaPoints
          (BillboardShape *this,GsShape *param_1,Renderer *param_2,float *param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pfVar5 = (float *)(this + 0x4c);
  bVar3 = true;
  pfVar4 = param_3 + 1;
  uVar6 = 0;
  do {
    RawTransformGroup::updateWorldTransformation();
    fVar9 = pfVar5[-2];
    fVar7 = pfVar5[-1];
    fVar10 = *pfVar5;
    uVar8 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xc0),fVar7 * *(float *)(param_1 + 0xd0));
    local_70 = (float)NEON_fmadd(fVar10,*(undefined4 *)(param_1 + 0xe0),uVar8);
    local_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) * fVar7 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20) * fVar9 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) * fVar10 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20),
                        (float)*(undefined8 *)(param_1 + 200) * fVar7 +
                        (float)*(undefined8 *)(param_1 + 0xb8) * fVar9 +
                        (float)*(undefined8 *)(param_1 + 0xd8) * fVar10 +
                        (float)*(undefined8 *)(param_1 + 0xe8));
    local_70 = *(float *)(param_1 + 0xf0) + local_70;
    Renderer::projectClipCoords(param_2,(Vector3 *)&local_78,(Vector3 *)&local_68);
    if ((((1.0 < local_60) || (local_68 < 0.0)) || (1.0 < local_68)) ||
       ((local_64 < 0.0 || (1.0 < local_64)))) break;
    uVar1 = uVar6 + 1;
    bVar3 = uVar6 < 3;
    pfVar5 = pfVar5 + 3;
    pfVar4[-1] = local_68;
    *pfVar4 = local_64;
    pfVar4 = pfVar4 + 2;
    uVar6 = uVar1;
  } while (uVar1 != 4);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


