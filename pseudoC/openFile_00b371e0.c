// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openFile
// Entry Point: 00b371e0
// Size: 240 bytes
// Signature: undefined __thiscall openFile(ZIPFileArchive * this, char * param_1)


/* ZIPFileArchive::openFile(char const*) */

long * __thiscall ZIPFileArchive::openFile(ZIPFileArchive *this,char *param_1)

{
  ACCESS_MODE AVar1;
  ulong uVar2;
  unz64_file_pos_s *puVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(this + 0x10);
  if (plVar4 == (long *)(this + 0x18)) {
    if (*(long *)(this + 0x20) != 0) goto LAB_00b37250;
    AVar1 = (int)this + 0x41;
    if (((byte)this[0x40] & 1) != 0) {
      AVar1 = (ACCESS_MODE)*(undefined8 *)(this + 0x50);
    }
    uVar2 = NativeFile::open((char *)(this + 0x18),AVar1,false);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((uVar2 & 1) == 0) {
    return (long *)0x0;
  }
LAB_00b37250:
  pvVar5 = *(void **)(this + 0x80b0);
  if (pvVar5 != (void *)0x0) {
    plVar4 = (long *)operator_new(0x28);
                    /* try { // try from 00b3726c to 00b3728f has its CatchHandler @ 00b372d0 */
    puVar3 = (unz64_file_pos_s *)getIndexedFilePos(this,param_1);
    ZIPFile::ZIPFile((ZIPFile *)plVar4,pvVar5,param_1,puVar3,*(ulonglong *)(this + 0x80d8));
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((uVar2 & 1) != 0) {
      return plVar4;
    }
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return (long *)0x0;
}


