// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveInfoLayer
// Entry Point: 008ea938
// Size: 400 bytes
// Signature: undefined __thiscall saveInfoLayer(BaseTerrain * this, uint param_1, char * param_2)


/* BaseTerrain::saveInfoLayer(unsigned int, char const*) */

void __thiscall BaseTerrain::saveInfoLayer(BaseTerrain *this,uint param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  allocator *paVar3;
  char *pcVar4;
  ulong local_88;
  allocator *paStack_80;
  char *local_78;
  undefined8 local_70;
  allocator *paStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  paVar3 = (allocator *)strlen(param_2);
  if ((allocator *)0xffffffffffffffef < paVar3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (paVar3 < (allocator *)0x17) {
    pcVar4 = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)paVar3 << 1));
    if (paVar3 == (allocator *)0x0) goto LAB_008ea9d0;
  }
  else {
    pcVar4 = (char *)operator_new((ulong)(paVar3 + 0x10) & 0xfffffffffffffff0);
    local_70 = (ulong)(paVar3 + 0x10) & 0xfffffffffffffff0 | 1;
    paStack_68 = paVar3;
    local_60 = pcVar4;
  }
  memcpy(pcVar4,param_2,(size_t)paVar3);
LAB_008ea9d0:
  pcVar4[(long)paVar3] = '\0';
  paVar3 = (allocator *)(local_70 >> 1 & 0x7f);
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    paVar3 = paStack_68;
    pcVar4 = local_60;
  }
  do {
    if (paVar3 == (allocator *)0x0) goto LAB_008eaa48;
    pcVar1 = pcVar4 + -1 + (long)paVar3;
    paVar3 = paVar3 + -1;
  } while (*pcVar1 != '.');
  if (paVar3 != (allocator *)0xffffffffffffffff) {
                    /* try { // try from 008eaa14 to 008eaa27 has its CatchHandler @ 008eaac8 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88,(ulong)&local_70,0,paVar3);
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    paStack_68 = paStack_80;
    local_70 = local_88;
    local_60 = local_78;
  }
LAB_008eaa48:
                    /* try { // try from 008eaa48 to 008eaa7f has its CatchHandler @ 008eaacc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_70);
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
  DensityMapEntity::saveToFile
            (*(DensityMapEntity **)(*(long *)(this + 0x50) + (ulong)param_1 * 0x58 + 0x38),pcVar4);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


