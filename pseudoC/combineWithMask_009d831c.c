// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combineWithMask
// Entry Point: 009d831c
// Size: 152 bytes
// Signature: undefined __thiscall combineWithMask(ProceduralPlacementClearMask * this, ProceduralPlacementMask * param_1)


/* ProceduralPlacementClearMask::combineWithMask(ProceduralPlacementMask*) */

void __thiscall
ProceduralPlacementClearMask::combineWithMask
          (ProceduralPlacementClearMask *this,ProceduralPlacementMask *param_1)

{
  long lVar1;
  byte local_118;
  undefined2 local_117;
  undefined local_115;
  void *local_108;
  ProceduralPlacementMask aPStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_118 = 4;
  local_117 = 0x726f;
  local_115 = 0;
                    /* try { // try from 009d8358 to 009d8367 has its CatchHandler @ 009d83c4 */
  ProceduralPlacementMask::ProceduralPlacementMask
            (aPStack_100,(ProceduralPlacementMask *)this,(basic_string *)&local_118,param_1);
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
                    /* try { // try from 009d8378 to 009d8383 has its CatchHandler @ 009d83b4 */
  ProceduralPlacementMask::copyImageBuffer(aPStack_100,(ProceduralPlacementMask *)this);
  ProceduralPlacementMask::~ProceduralPlacementMask(aPStack_100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


