// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: planeAt
// Entry Point: 00b64cac
// Size: 152 bytes
// Signature: undefined __thiscall planeAt(Brep * this, uint param_1)


/* Brep::planeAt(unsigned int) const */

void __thiscall Brep::planeAt(Brep *this,uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(this + 0x2f50);
  lVar1 = *(long *)(this + 0x2f68) + (ulong)param_1 * 0x20;
  lVar3 = *(long *)(this + 0x2ef0);
  Plane::Plane((Plane *)&local_38,
               (Vector3 *)
               (lVar3 + (ulong)*(ushort *)(lVar4 + (ulong)*(ushort *)(lVar1 + 8) * 0xc) * 0x10),
               (Vector3 *)
               (lVar3 + (ulong)*(ushort *)(lVar4 + (ulong)*(ushort *)(lVar1 + 0x10) * 0xc) * 0x10),
               (Vector3 *)
               (lVar3 + (ulong)*(ushort *)(lVar4 + (ulong)*(ushort *)(lVar1 + 0x18) * 0xc) * 0x10));
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30,uStack_2c);
}


