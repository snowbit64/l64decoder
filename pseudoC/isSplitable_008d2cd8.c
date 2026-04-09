// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isSplitable
// Entry Point: 008d2cd8
// Size: 416 bytes
// Signature: undefined __thiscall isSplitable(VertexFormat * this, VertexFormat * param_1)


/* FillPlaneGeometry::VertexFormat::isSplitable(FillPlaneGeometry::VertexFormat const&) const */

void __thiscall
FillPlaneGeometry::VertexFormat::isSplitable(VertexFormat *this,VertexFormat *param_1)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_20;
  ushort local_1c;
  long local_18;
  
  lVar3 = tpidr_el0;
  local_18 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x14);
  local_20 = *(uint *)(this + 0x14);
  local_1c = *(ushort *)(this + 0x18);
  if (uVar1 != 0xffff) {
    lVar5 = 0;
    if (((ushort)local_20 != uVar1) && ((ushort)local_20 != 0xffff)) {
      lVar5 = 1;
      if ((local_20 >> 0x10 == (uint)uVar1) || (local_20 >> 0x10 == 0xffff)) goto LAB_008d2d64;
      lVar5 = 2;
      if (((uint)local_1c == (uint)uVar1) || (local_1c == 0xffff)) goto LAB_008d2d64;
LAB_008d2e5c:
      uVar4 = 0;
      goto LAB_008d2dec;
    }
LAB_008d2d64:
    uVar2 = *(ushort *)(param_1 + 0x16);
    *(ushort *)((long)&local_20 + lVar5 * 2) = uVar1;
    if (uVar2 != 0xffff) {
      lVar5 = 0;
      if (((ushort)local_20 != uVar2) && ((ushort)local_20 != 0xffff)) {
        lVar5 = 1;
        if ((local_20 >> 0x10 != (uint)uVar2) && (local_20 >> 0x10 != 0xffff)) {
          lVar5 = 2;
          if (((uint)local_1c != (uint)uVar2) && (local_1c != 0xffff)) goto LAB_008d2e5c;
        }
      }
      uVar1 = *(ushort *)(param_1 + 0x18);
      *(ushort *)((long)&local_20 + lVar5 * 2) = uVar2;
      if (uVar1 != 0xffff) {
        lVar5 = 0;
        if (((ushort)local_20 != uVar1) && ((ushort)local_20 != 0xffff)) {
          lVar5 = 1;
          if ((local_20 >> 0x10 != (uint)uVar1) && (local_20 >> 0x10 != 0xffff)) {
            lVar5 = 2;
            if (((uint)local_1c != (uint)uVar1) && (local_1c != 0xffff)) goto LAB_008d2e5c;
          }
        }
        uVar4 = 1;
        *(ushort *)((long)&local_20 + lVar5 * 2) = uVar1;
        goto LAB_008d2dec;
      }
    }
  }
  uVar4 = 1;
LAB_008d2dec:
  if (*(long *)(lVar3 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


