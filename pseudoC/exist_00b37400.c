// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exist
// Entry Point: 00b37400
// Size: 196 bytes
// Signature: undefined __thiscall exist(ZIPFileArchive * this, char * param_1)


/* ZIPFileArchive::exist(char const*) */

bool __thiscall ZIPFileArchive::exist(ZIPFileArchive *this,char *param_1)

{
  ACCESS_MODE AVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(this + 0x80b0) == 0) {
LAB_00b37460:
    bVar2 = false;
  }
  else {
    if (this[0x80d0] != (ZIPFileArchive)0x0) {
      lVar4 = getIndexedFilePos(this,param_1);
      return lVar4 != 0;
    }
    plVar6 = *(long **)(this + 0x10);
    if (plVar6 == (long *)(this + 0x18)) {
      if (*(long *)(this + 0x20) == 0) {
        AVar1 = (int)this + 0x41;
        if (((byte)this[0x40] & 1) != 0) {
          AVar1 = (ACCESS_MODE)*(undefined8 *)(this + 0x50);
        }
        uVar5 = NativeFile::open((char *)(this + 0x18),AVar1,false);
        if ((uVar5 & 1) == 0) {
          return false;
        }
      }
    }
    else {
      uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((uVar5 & 1) == 0) goto LAB_00b37460;
    }
    iVar3 = unzLocateFile(*(long *)(this + 0x80b0),param_1,1);
    bVar2 = iVar3 == 0;
  }
  return bVar2;
}


