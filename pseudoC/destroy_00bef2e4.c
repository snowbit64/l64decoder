// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00bef2e4
// Size: 296 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderManager::destroy() */

void ShaderManager::destroy(void)

{
  CompiledShaderArchive CVar1;
  CompiledShaderArchive **in_x0;
  CompiledShaderArchive *pCVar2;
  KeyValueCacheClient *this;
  
  asyncCompileDisable();
  pCVar2 = *in_x0;
  if (pCVar2 != (CompiledShaderArchive *)0x0) {
    CompiledShaderArchive::~CompiledShaderArchive(pCVar2);
    operator_delete(pCVar2);
  }
  this = (KeyValueCacheClient *)in_x0[1];
  *in_x0 = (CompiledShaderArchive *)0x0;
  if (this != (KeyValueCacheClient *)0x0) {
    KeyValueCacheClient::~KeyValueCacheClient(this);
    operator_delete(this);
  }
  in_x0[1] = (CompiledShaderArchive *)0x0;
  if ((*(byte *)(in_x0 + 0xb) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0xb) = 0;
    if ((*(byte *)(in_x0 + 5) & 1) == 0) goto LAB_00bef384;
LAB_00bef344:
    *in_x0[7] = (CompiledShaderArchive)0x0;
    in_x0[6] = (CompiledShaderArchive *)0x0;
    if ((*(byte *)(in_x0 + 8) & 1) == 0) goto LAB_00bef390;
LAB_00bef358:
    *in_x0[10] = (CompiledShaderArchive)0x0;
    in_x0[9] = (CompiledShaderArchive *)0x0;
    pCVar2 = in_x0[0x11];
  }
  else {
    *in_x0[0xd] = (CompiledShaderArchive)0x0;
    in_x0[0xc] = (CompiledShaderArchive *)0x0;
    if ((*(byte *)(in_x0 + 5) & 1) != 0) goto LAB_00bef344;
LAB_00bef384:
    *(undefined2 *)(in_x0 + 5) = 0;
    if ((*(byte *)(in_x0 + 8) & 1) != 0) goto LAB_00bef358;
LAB_00bef390:
    *(undefined2 *)(in_x0 + 8) = 0;
    pCVar2 = in_x0[0x11];
  }
  if (pCVar2 == (CompiledShaderArchive *)0x0) {
    return;
  }
  ShaderConverter::shutdown();
  pCVar2 = in_x0[0x11];
  if (pCVar2 == (CompiledShaderArchive *)0x0) goto LAB_00bef3d8;
  if (((byte)pCVar2[0xe10] & 1) == 0) {
    if (((byte)pCVar2[0xdf8] & 1) != 0) goto LAB_00bef3f8;
LAB_00bef3b8:
    CVar1 = pCVar2[0xde0];
  }
  else {
    operator_delete(*(void **)(pCVar2 + 0xe20));
    if (((byte)pCVar2[0xdf8] & 1) == 0) goto LAB_00bef3b8;
LAB_00bef3f8:
    operator_delete(*(void **)(pCVar2 + 0xe08));
    CVar1 = pCVar2[0xde0];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(pCVar2 + 0xdf0));
  }
  IR_TypeSet::~IR_TypeSet((IR_TypeSet *)(pCVar2 + 0x10));
  operator_delete(pCVar2);
LAB_00bef3d8:
  in_x0[0x11] = (CompiledShaderArchive *)0x0;
  return;
}


