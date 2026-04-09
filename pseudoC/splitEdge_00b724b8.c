// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitEdge
// Entry Point: 00b724b8
// Size: 284 bytes
// Signature: undefined __thiscall splitEdge(Brep * this, uint param_1, float param_2, ushort param_3)


/* Brep::splitEdge(unsigned int, float, unsigned short) */

void __thiscall Brep::splitEdge(Brep *this,uint param_1,float param_2,ushort param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  uVar4 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar4 = param_1 - 1;
  }
  lVar7 = *(long *)(this + 0x2ef0);
  uVar6 = (ulong)*(ushort *)
                  (*(long *)(this + 0x2f50) +
                  (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar4 * 8) * 0xc);
  puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x10);
  if (param_2 <= 0.0) {
    local_30 = *(float *)(puVar1 + 1);
    local_38 = *puVar1;
  }
  else {
    uVar8 = (ulong)*(ushort *)
                    (*(long *)(this + 0x2f50) +
                    (ulong)*(ushort *)(*(long *)(this + 0x2f68) + (ulong)param_1 * 8) * 0xc);
    puVar2 = (undefined8 *)(lVar7 + uVar8 * 0x10);
    if (param_2 < 1.0) {
      lVar3 = lVar7 + uVar6 * 0x10;
      lVar7 = lVar7 + uVar8 * 0x10;
      local_38 = CONCAT44((*(float *)(lVar7 + 4) - *(float *)(lVar3 + 4)) * param_2 +
                          *(float *)(lVar3 + 4),
                          (*(float *)puVar2 - *(float *)puVar1) * param_2 + *(float *)puVar1);
      local_30 = (*(float *)(lVar7 + 8) - *(float *)(lVar3 + 8)) * param_2 + *(float *)(lVar3 + 8);
    }
    else {
      local_30 = *(float *)(puVar2 + 1);
      local_38 = *puVar2;
    }
  }
  splitEdge(this,param_1,(Vector3 *)&local_38,param_2,param_3);
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


