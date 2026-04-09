// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: arithmeticEval
// Entry Point: 00b91b2c
// Size: 716 bytes
// Signature: undefined __thiscall arithmeticEval(Preprocessor * this, uint param_1, uint param_2)


/* Preprocessor::arithmeticEval(unsigned int, unsigned int) */

int __thiscall Preprocessor::arithmeticEval(Preprocessor *this,uint param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  __tree_iterator _Var7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong local_80;
  ulong uStack_78;
  undefined8 *local_70;
  ulong local_68;
  ulong local_60;
  char *local_58;
  int local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_68 = 0x64656e696665640e;
  local_60 = local_60 & 0xffffffffffffff00;
                    /* try { // try from 00b91b84 to 00b91b8b has its CatchHandler @ 00b91e1c */
  _Var7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                      *)(this + 0x18),(basic_string *)&local_68);
  if (this + 0x20 == (Preprocessor *)(ulong)_Var7) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)((Preprocessor *)(ulong)_Var7 + 0x38);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (lVar11 == 0) {
    local_60 = local_60 & 0xffffffffffffff00;
    local_68 = 0x64656e696665640e;
                    /* try { // try from 00b91bf8 to 00b91c1b has its CatchHandler @ 00b91e00 */
    puVar8 = (undefined8 *)operator_new(0x48);
    puVar8[7] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              puVar8,(basic_string *)&local_68);
    puVar8[7] = 0;
    *(undefined4 *)(puVar8 + 6) = 0;
    *(undefined *)(puVar8 + 8) = 0;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    addMacro(this,(Macro *)puVar8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(puVar8 + 3));
    *(undefined4 *)(puVar8 + 6) = 0xfffffffe;
  }
  else {
    printWarning(this,"macro defined() already defined");
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = (char *)0x0;
  lVar10 = **(long **)(this + 0x38);
  if (param_1 == 0) {
    bVar5 = *(char *)((long)*(long **)(this + 0x38) + 0x1c) != '\0';
  }
  else {
                    /* try { // try from 00b91c74 to 00b91cb3 has its CatchHandler @ 00b91e2c */
    cVar6 = getChar(this,param_1 - 1);
    bVar5 = cVar6 == '\n';
  }
  processText(this,(char *)(lVar10 + (ulong)param_1),param_2 - param_1,bVar5,0,
              (basic_string *)&local_68,false);
  if (lVar11 == 0) {
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    local_80 = 0x64656e696665640e;
                    /* try { // try from 00b91cdc to 00b91ce7 has its CatchHandler @ 00b91df8 */
    deleteMacro(this,(basic_string *)&local_80);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  bVar5 = (local_68 & 1) != 0;
  pcVar2 = (char *)((ulong)&local_68 | 1);
  if (bVar5) {
    pcVar2 = local_58;
  }
  uVar1 = (uint)((byte)local_68 >> 1);
  if (bVar5) {
    uVar1 = (uint)local_60;
  }
                    /* try { // try from 00b91d1c to 00b91d27 has its CatchHandler @ 00b91e2c */
  uVar9 = StringArithmeticUtil::doArithmeticEval(pcVar2,0,uVar1,&local_4c);
  if ((uVar9 & 1) == 0) {
                    /* try { // try from 00b91d2c to 00b91d33 has its CatchHandler @ 00b91dfc */
    local_70 = (undefined8 *)operator_new(0x30);
    *(undefined *)((long)local_70 + 0x2a) = 0;
    local_70[1] = 0x7475706d6f63206f;
    *local_70 = 0x742064656c696166;
    local_70[3] = 0x6176652063697465;
    local_70[2] = 0x6d68746972612065;
    uStack_78 = 0x2a;
    local_80 = 0x31;
    pcVar2 = (char *)((ulong)&local_68 | 1);
    if ((local_68 & 1) != 0) {
      pcVar2 = local_58;
    }
    *(undefined8 *)((long)local_70 + 0x22) = 0x203a6e6f6974616c;
    *(undefined8 *)((long)local_70 + 0x1a) = 0x756c617665206369;
                    /* try { // try from 00b91d78 to 00b91d9f has its CatchHandler @ 00b91e04 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_80,(ulong)pcVar2);
    puVar8 = (undefined8 *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      puVar8 = local_70;
    }
    printError(this,(char *)puVar8);
    local_4c = 0;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  iVar4 = local_4c;
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}


