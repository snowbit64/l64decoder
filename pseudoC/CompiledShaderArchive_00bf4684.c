// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CompiledShaderArchive
// Entry Point: 00bf4684
// Size: 384 bytes
// Signature: undefined __thiscall CompiledShaderArchive(CompiledShaderArchive * this, IShaderCompiler * param_1, IShaderCreator * param_2)


/* CompiledShaderArchive::CompiledShaderArchive(IShaderCompiler*, IShaderCreator*) */

void __thiscall
CompiledShaderArchive::CompiledShaderArchive
          (CompiledShaderArchive *this,IShaderCompiler *param_1,IShaderCreator *param_2)

{
  undefined8 *puVar1;
  long **pplVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  
  *(undefined8 *)(this + 0x50) = 0;
  *(CompiledShaderArchive **)(this + 0x48) = this + 0x50;
  pplVar5 = (long **)(this + 0xf0);
  *pplVar5 = (long *)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(CompiledShaderArchive **)(this + 0x88) = this + 0x90;
  pplVar4 = (long **)(this + 0xe8);
  *pplVar4 = (long *)pplVar5;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(CompiledShaderArchive **)(this + 0x60) = this + 0x68;
  *(CompiledShaderArchive **)(this + 0xb8) = this + 0xc0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(CompiledShaderArchive **)(this + 0xa0) = this + 0xa8;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(CompiledShaderArchive **)(this + 0xd0) = this + 0xd8;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
                    /* try { // try from 00bf4758 to 00bf4763 has its CatchHandler @ 00bf4818 */
  Mutex::Mutex((Mutex *)(this + 0x118),true);
  this[0x104] = (CompiledShaderArchive)0x0;
  *(IShaderCreator **)(this + 0x108) = param_2;
  *(IShaderCompiler **)(this + 0x110) = param_1;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  for (pplVar2 = (long **)*(long **)(this + 0xf0);
      (pplVar3 = pplVar5, pplVar2 != (long **)0x0 && (pplVar3 = pplVar2, pplVar2[4] != (long *)0x0))
      ; pplVar2 = (long **)*pplVar2) {
    pplVar5 = pplVar2;
  }
  if (*pplVar5 == (long *)0x0) {
                    /* try { // try from 00bf4798 to 00bf47a3 has its CatchHandler @ 00bf4804 */
    puVar1 = (undefined8 *)operator_new(0x30);
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = pplVar3;
    *pplVar5 = puVar1;
    pplVar2 = (long **)*pplVar4;
    *(undefined4 *)(puVar1 + 5) = 0xffffffff;
    if (*pplVar2 != (long *)0x0) {
      *pplVar4 = *pplVar2;
      puVar1 = *pplVar5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xf0),(__tree_node_base *)puVar1);
    *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
  }
  return;
}


