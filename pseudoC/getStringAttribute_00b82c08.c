// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStringAttribute
// Entry Point: 00b82c08
// Size: 432 bytes
// Signature: undefined __thiscall getStringAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, char * param_4)


/* AttributedProperties::getStringAttribute(char const*, char const*, char const*, char const*) */

char * __thiscall
AttributedProperties::getStringAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,char *param_4)

{
  long lVar1;
  size_t __n;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00b82cac;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar4 = operator_new(uVar5);
    local_80 = uVar5 | 1;
    local_78 = __n;
    local_70 = pvVar4;
  }
  memcpy(pvVar4,param_1,__n);
LAB_00b82cac:
  *(undefined *)((long)pvVar4 + __n) = 0;
                    /* try { // try from 00b82cb0 to 00b82ccf has its CatchHandler @ 00b82dbc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_80);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)&local_80);
  pvVar4 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar4 = local_70;
  }
                    /* try { // try from 00b82cec to 00b82d4f has its CatchHandler @ 00b82db8 */
  pcVar2 = (char *)(**(code **)(*(long *)this + 0x10))(this,pvVar4,0);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = param_4, param_2 != (char *)0x0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_80);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_80);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_80);
    pvVar4 = (void *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      pvVar4 = local_70;
    }
    pcVar3 = (char *)(**(code **)(*(long *)this + 0x10))(this,pvVar4,0);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar2;
}


