// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRotation
// Entry Point: 007495a8
// Size: 356 bytes
// Signature: undefined __thiscall getRotation(Clip * this, int param_1, GsQuaternion * param_2)


/* Clip::getRotation(int, GsQuaternion&) */

void __thiscall Clip::getRotation(Clip *this,int param_1,GsQuaternion *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  lVar1 = *(long *)(lVar3 + 0xc0) + (ulong)*(byte *)(*(long *)(lVar3 + 0xc0) + 6);
  local_30 = (float)(int)*(short *)(lVar1 + 10) / 32767.0;
  fStack_34 = (float)(int)*(short *)(lVar1 + 8) / 32767.0;
  fStack_2c = (float)(int)*(short *)(lVar1 + 0xc) / 32767.0;
  uVar4 = NEON_fmadd(fStack_34,fStack_34,local_30 * local_30);
  local_38 = (float)(int)*(short *)(lVar1 + 0xe) / 32767.0;
  uVar4 = NEON_fmadd(fStack_2c,fStack_2c,uVar4);
  fVar5 = (float)NEON_fmadd(local_38,local_38,uVar4);
  fVar5 = 1.0 / SQRT(fVar5);
  local_30 = local_30 * fVar5;
  fStack_2c = fStack_2c * fVar5;
  fStack_34 = fStack_34 * fVar5;
  local_38 = local_38 * fVar5;
  lVar1 = *(long *)(lVar3 + 0xb8) + (ulong)*(byte *)(*(long *)(lVar3 + 0xb8) + 6);
  local_40 = (float)(int)*(short *)(lVar1 + 10) / 32767.0;
  fStack_44 = (float)(int)*(short *)(lVar1 + 8) / 32767.0;
  fStack_3c = (float)(int)*(short *)(lVar1 + 0xc) / 32767.0;
  local_48 = (float)(int)*(short *)(lVar1 + 0xe) / 32767.0;
  uVar4 = NEON_fmadd(fStack_44,fStack_44,local_40 * local_40);
  uVar4 = NEON_fmadd(fStack_3c,fStack_3c,uVar4);
  fVar5 = (float)NEON_fmadd(local_48,local_48,uVar4);
  fVar5 = 1.0 / SQRT(fVar5);
  local_40 = local_40 * fVar5;
  fStack_3c = fStack_3c * fVar5;
  fStack_44 = fStack_44 * fVar5;
  local_48 = local_48 * fVar5;
  GsQuaternion::nlerpShortestPath
            (param_2,(GsQuaternion *)&local_38,(GsQuaternion *)&local_48,*(float *)(lVar3 + 0xac));
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


