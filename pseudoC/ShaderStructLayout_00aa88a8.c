// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ShaderStructLayout
// Entry Point: 00aa88a8
// Size: 312 bytes
// Signature: undefined __thiscall ShaderStructLayout(ShaderStructLayout * this, char * param_1, StructType param_2)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ShaderStructLayout::ShaderStructLayout(char const*, ShaderStructLayout::StructType) */

void __thiscall
ShaderStructLayout::ShaderStructLayout(ShaderStructLayout *this,char *param_1,StructType param_2)

{
  int iVar1;
  size_t __n;
  ShaderStructLayout *__dest;
  ulong uVar2;
  
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = this + 1;
    *this = SUB41((int)__n << 1,0);
    if (__n == 0) goto LAB_00aa8928;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (ShaderStructLayout *)operator_new(uVar2);
    *(size_t *)(this + 8) = __n;
    *(ShaderStructLayout **)(this + 0x10) = __dest;
    *(ulong *)this = uVar2 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00aa8928:
  __dest[__n] = (ShaderStructLayout)0x0;
  *(undefined8 *)(this + 0x20) = 0;
  this[0x19] = SUB41(param_2,0);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar1 != 0)) {
                    /* try { // try from 00aa89a8 to 00aa89b3 has its CatchHandler @ 00aa89e0 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  iVar1 = *_DAT_01048f88;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x18] = (ShaderStructLayout)((param_2 & 0xff) == 2 || iVar1 == 4);
  return;
}


