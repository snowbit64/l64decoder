// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementClearMask
// Entry Point: 009d8134
// Size: 212 bytes
// Signature: undefined __thiscall ProceduralPlacementClearMask(ProceduralPlacementClearMask * this)


/* ProceduralPlacementClearMask::ProceduralPlacementClearMask() */

void __thiscall
ProceduralPlacementClearMask::ProceduralPlacementClearMask(ProceduralPlacementClearMask *this)

{
  long lVar1;
  void *__s;
  ushort local_70;
  void *local_60;
  ushort local_58;
  void *local_48;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_58 = 0;
  local_70 = 0;
                    /* try { // try from 009d8160 to 009d816f has its CatchHandler @ 009d8218 */
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_40,(basic_string *)&local_58,
             (basic_string *)&local_70);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(this + 0x50) = 0x80000000800;
  *(undefined ***)this = &PTR__ProceduralPlacementClearMask_00fe23f8;
                    /* try { // try from 009d81a8 to 009d81af has its CatchHandler @ 009d8208 */
  __s = operator_new__(0x1000000);
  *(void **)(this + 0x58) = __s;
  memset(__s,0,0x1000000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


