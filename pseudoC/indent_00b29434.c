// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: indent
// Entry Point: 00b29434
// Size: 232 bytes
// Signature: undefined __cdecl indent(basic_ostream * param_1, SerializationFlags param_2, uint param_3)


/* JSONUtil::indent(std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&,
   JSONUtil::SerializationFlags, unsigned int) */

void JSONUtil::indent(basic_ostream *param_1,SerializationFlags param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_2 & 1) != 0) goto LAB_00b294f0;
  uVar1 = param_3 << 1;
  uVar3 = (ulong)uVar1;
  if (uVar1 < 0x17) {
    pcVar4 = (char *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)(param_3 << 2));
    if (uVar1 != 0) goto LAB_00b294a4;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0x1fffffff0;
    pcVar4 = (char *)operator_new(uVar5);
    local_60 = uVar5 | 1;
    local_58 = uVar3;
    local_50 = pcVar4;
LAB_00b294a4:
    memset(pcVar4,0x20,uVar3);
  }
  pcVar4[uVar3] = '\0';
  uVar3 = local_60 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    uVar3 = local_58;
    pcVar4 = local_50;
  }
                    /* try { // try from 00b294d8 to 00b294df has its CatchHandler @ 00b2951c */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar3);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00b294f0:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


