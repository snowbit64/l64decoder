// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveHeightMapToImagePrepare
// Entry Point: 008e6d98
// Size: 168 bytes
// Signature: undefined __thiscall saveHeightMapToImagePrepare(BaseTerrain * this, char * param_1)


/* BaseTerrain::saveHeightMapToImagePrepare(char const*) */

void __thiscall BaseTerrain::saveHeightMapToImagePrepare(BaseTerrain *this,char *param_1)

{
  int iVar1;
  undefined8 *this_00;
  void *__dest;
  void *__src;
  ulong __n;
  
  if (*(long *)(this + 0x168) != 0) {
    return;
  }
  this_00 = (undefined8 *)operator_new(0x68);
                    /* try { // try from 008e6ddc to 008e6deb has its CatchHandler @ 008e6e40 */
  SaveHelper::SaveHelper((SaveHelper *)this_00,param_1,"HeightMapSaveHelper");
  this_00[0xb] = 0;
  iVar1 = *(int *)(this + 0x90);
  *(undefined8 **)(this + 0x168) = this_00;
  __src = *(void **)(this + 0x80);
  __n = (ulong)(uint)(iVar1 * iVar1) << 1;
  *this_00 = &PTR__HeightMapSaveHelper_00fde6d0;
  __dest = operator_new__(__n);
  this_00[0xb] = __dest;
  *(int *)(this_00 + 0xc) = iVar1;
  memcpy(__dest,__src,__n);
  return;
}


