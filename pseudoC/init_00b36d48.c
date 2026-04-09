// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b36d48
// Size: 312 bytes
// Signature: undefined __thiscall init(ZIPFileArchive * this, bool param_1)


/* ZIPFileArchive::init(bool) */

void __thiscall ZIPFileArchive::init(ZIPFileArchive *this,bool param_1)

{
  ACCESS_MODE AVar1;
  ZIPFileArchive *pZVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  *(code **)(this + 0x8070) = gs_open_file_func;
  *(code **)(this + 0x8078) = gs_read_file_func;
  *(code **)(this + 0x8080) = gs_write_file_func;
  *(code **)(this + 0x8088) = gs_tell_file_func;
  this[0x80d0] = (ZIPFileArchive)0x0;
  plVar5 = *(long **)(this + 0x10);
  *(code **)(this + 0x80a0) = gs_error_file_func;
  *(ZIPFileArchive **)(this + 0x80a8) = this;
  *(code **)(this + 0x8090) = gs_seek_file_func;
  *(code **)(this + 0x8098) = gs_close_file_func;
  *(undefined8 *)(this + 0x8060) = 0;
  *(undefined8 *)(this + 0x8058) = 0;
  this[0x8068] = (ZIPFileArchive)0x0;
  *(undefined8 *)(this + 0x80b0) = 0;
  if (plVar5 == (long *)(this + 0x18)) {
    if (*(long *)(this + 0x20) != 0) goto LAB_00b36e20;
    AVar1 = (int)this + 0x41;
    if (((byte)this[0x40] & 1) != 0) {
      AVar1 = (ACCESS_MODE)*(undefined8 *)(this + 0x50);
    }
    uVar3 = NativeFile::open((char *)(this + 0x18),AVar1,false);
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
LAB_00b36e20:
  pZVar2 = this + 0x41;
  if (((byte)this[0x40] & 1) != 0) {
    pZVar2 = *(ZIPFileArchive **)(this + 0x50);
  }
  uVar4 = unzOpen2_64(pZVar2,this + 0x8070);
  *(undefined8 *)(this + 0x80b0) = uVar4;
  uVar4 = (**(code **)(**(long **)(this + 0x10) + 0x58))(*(long **)(this + 0x10));
  *(undefined8 *)(this + 0x80d8) = uVar4;
  if (!param_1) {
    return;
  }
  fillFilePosIndex();
  return;
}


