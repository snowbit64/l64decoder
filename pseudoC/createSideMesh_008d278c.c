// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSideMesh
// Entry Point: 008d278c
// Size: 100 bytes
// Signature: undefined createSideMesh(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FillPlaneGeometry::createSideMesh() const */

void FillPlaneGeometry::createSideMesh(void)

{
  long lVar1;
  long in_x0;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = NEON_fmov(0x3f800000,4);
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  BrepUtil::createIndexedTriangleSetFromBrep
            (*(Brep **)(in_x0 + 0x188),0,(Vector2 *)&local_30,(Vector2 *)&local_38,(ushort **)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


