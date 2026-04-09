// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeObject
// Entry Point: 00b286b0
// Size: 404 bytes
// Signature: undefined __cdecl deserializeObject(basic_ifstream * param_1, Object * param_2, ParamSet * param_3)


/* JSONUtil::deserializeObject(std::__ndk1::basic_ifstream<char, std::__ndk1::char_traits<char> >&,
   JSONUtil::Object&, JSONUtil::ParamSet const*) */

uint JSONUtil::deserializeObject(basic_ifstream *param_1,Object *param_2,ParamSet *param_3)

{
  long lVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  char *local_b0 [2];
  void *local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ulong local_80;
  undefined8 uStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (char *)0x0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
  while( true ) {
                    /* try { // try from 00b28720 to 00b28727 has its CatchHandler @ 00b28884 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00b28728 to 00b28743 has its CatchHandler @ 00b288b0 */
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)local_b0);
    cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)local_b0);
                    /* try { // try from 00b28750 to 00b2875f has its CatchHandler @ 00b28884 */
    plVar5 = (long *)std::__ndk1::
                     getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               ((basic_istream *)param_1,(basic_string *)&local_98,cVar3);
    if (((byte)*(basic_istream *)((long)plVar5 + *(long *)(*plVar5 + -0x18) + 0x20) & 5) != 0)
    break;
                    /* try { // try from 00b28778 to 00b28787 has its CatchHandler @ 00b28880 */
    FUN_006cadd8(local_b0,&local_98,&DAT_004fddf9);
    pvVar2 = (void *)((ulong)local_b0 | 1);
    if (((ulong)local_b0[0] & 1) != 0) {
      pvVar2 = local_a0;
    }
                    /* try { // try from 00b287a0 to 00b287a7 has its CatchHandler @ 00b28848 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_80,(ulong)pvVar2);
    if (((ulong)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  local_b0[0] = (char *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    local_b0[0] = local_70;
  }
                    /* try { // try from 00b287d8 to 00b287e7 has its CatchHandler @ 00b28844 */
  uVar4 = parseObject(param_2,local_b0,param_3);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


