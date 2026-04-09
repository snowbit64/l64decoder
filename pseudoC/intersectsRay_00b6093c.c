// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: intersectsRay
// Entry Point: 00b6093c
// Size: 84 bytes
// Signature: undefined __cdecl intersectsRay(Vector3 * param_1, Vector3 * param_2)


/* BoundingAxisAlignedBox::intersectsRay(Vector3 const&, Vector3 const&) const */

uint BoundingAxisAlignedBox::intersectsRay(Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x40))();
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


