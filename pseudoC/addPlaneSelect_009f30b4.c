// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPlaneSelect
// Entry Point: 009f30b4
// Size: 696 bytes
// Signature: undefined __thiscall addPlaneSelect(DeferredDebugRenderer * this, int param_1, float * param_2, float param_3, Matrix4x4 * param_4, int param_5, double param_6, CATEGORY param_7)


/* DeferredDebugRenderer::addPlaneSelect(int, float const*, float, Matrix4x4 const*, int, double,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPlaneSelect
          (DeferredDebugRenderer *this,int param_1,float *param_2,float param_3,Matrix4x4 *param_4,
          int param_5,double param_6,CATEGORY param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(uint *)(this + 0x2a0) & param_7) != 0) {
    fVar4 = (float)param_6 * param_3;
    if (param_1 == 3) {
      if (0 < param_5) {
        iVar2 = -param_5;
        fVar5 = (float)NEON_fnmsub(fVar4,(float)iVar2,fVar4);
        iVar3 = iVar2;
        do {
          local_80 = 0.0;
          local_98 = fVar4 * (float)iVar3;
          local_90 = 0.0;
          local_94 = fVar4 * (float)param_5;
          local_88 = local_98;
          local_84 = fVar5;
          transformAndDrawLine
                    (this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_5);
        if (0 < param_5) {
          do {
            local_80 = 0.0;
            local_94 = fVar4 * (float)iVar2;
            local_90 = 0.0;
            local_98 = fVar4 * (float)param_5;
            local_88 = fVar5;
            local_84 = local_94;
            transformAndDrawLine
                      (this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7);
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_5);
        }
      }
    }
    else if (param_1 == 2) {
      if (0 < param_5) {
        iVar2 = -param_5;
        fVar5 = (float)NEON_fnmsub(fVar4,(float)iVar2,fVar4);
        iVar3 = iVar2;
        do {
          local_84 = 0.0;
          local_98 = fVar4 * (float)iVar3;
          local_94 = 0.0;
          local_90 = fVar4 * (float)param_5;
          local_88 = local_98;
          local_80 = fVar5;
          transformAndDrawLine
                    (this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7);
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_5);
        if (0 < param_5) {
          do {
            local_90 = fVar4 * (float)iVar2;
            local_84 = 0.0;
            local_94 = 0.0;
            local_98 = fVar4 * (float)param_5;
            local_88 = fVar5;
            local_80 = local_90;
            transformAndDrawLine
                      (this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7);
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_5);
        }
      }
    }
    else if ((param_1 == 1) && (0 < param_5)) {
      iVar2 = -param_5;
      fVar5 = (float)NEON_fnmsub(fVar4,(float)iVar2,fVar4);
      iVar3 = iVar2;
      do {
        local_88 = 0.0;
        local_94 = fVar4 * (float)iVar3;
        local_98 = 0.0;
        local_90 = fVar4 * (float)param_5;
        local_84 = local_94;
        local_80 = fVar5;
        transformAndDrawLine(this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7)
        ;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_5);
      if (0 < param_5) {
        do {
          local_88 = 0.0;
          local_90 = fVar4 * (float)iVar2;
          local_98 = 0.0;
          local_94 = fVar4 * (float)param_5;
          local_84 = fVar5;
          local_80 = local_90;
          transformAndDrawLine
                    (this,(Vector3 *)&local_88,(Vector3 *)&local_98,param_2,param_4,param_7);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_5);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


