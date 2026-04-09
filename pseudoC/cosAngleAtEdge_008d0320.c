// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cosAngleAtEdge
// Entry Point: 008d0320
// Size: 300 bytes
// Signature: undefined __cdecl cosAngleAtEdge(Brep * param_1, uint param_2)


/* FillPlaneGeometry::cosAngleAtEdge(Brep const&, unsigned int) */

float FillPlaneGeometry::cosAngleAtEdge(Brep *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Brep::computeFaceNormal(param_1,param_2 >> 2,(Vector3 *)&local_48);
  fVar5 = 1.0;
  uVar2 = NEON_fmadd(local_48,local_48,fStack_44 * fStack_44);
  fVar4 = (float)NEON_fmadd(local_40,local_40,uVar2);
  fVar3 = 1.0;
  if (1e-06 < fVar4) {
    fVar3 = 1.0 / SQRT(fVar4);
  }
  local_48 = local_48 * fVar3;
  fStack_44 = fStack_44 * fVar3;
  local_40 = local_40 * fVar3;
  Brep::computeFaceNormal
            (param_1,*(uint *)(*(long *)(param_1 + 0x2f68) + (ulong)param_2 * 8 + 4) >> 2,
             (Vector3 *)&local_58);
  uVar2 = NEON_fmadd(local_58,local_58,fStack_54 * fStack_54);
  fVar3 = (float)NEON_fmadd(local_50,local_50,uVar2);
  if (1e-06 < fVar3) {
    fVar5 = 1.0 / SQRT(fVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    uVar2 = NEON_fmadd(local_48,local_58 * fVar5,fStack_54 * fVar5 * fStack_44);
    fVar3 = (float)NEON_fmadd(local_40,local_50 * fVar5,uVar2);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


