// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0079c92c
// Size: 728 bytes
// Signature: undefined __thiscall init(WorldCompressionParams * this, float param_1, float param_2, float param_3)


/* MeshSplitManager::WorldCompressionParams::init(float, float, float) */

void __thiscall
MeshSplitManager::WorldCompressionParams::init
          (WorldCompressionParams *this,float param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  *(float *)(this + 8) = param_1;
  *(float *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = 0x20;
  fVar2 = (1.0 / param_3) * param_1;
  *(float *)this = param_3;
  *(float *)(this + 4) = 1.0 / param_3;
  if (fVar2 <= 2.0) {
    uVar1 = 1;
  }
  else if (fVar2 <= 4.0) {
    uVar1 = 2;
  }
  else if (fVar2 <= 8.0) {
    uVar1 = 3;
  }
  else if (fVar2 <= 16.0) {
    uVar1 = 4;
  }
  else if (fVar2 <= 32.0) {
    uVar1 = 5;
  }
  else if (fVar2 <= 64.0) {
    uVar1 = 6;
  }
  else if (fVar2 <= 128.0) {
    uVar1 = 7;
  }
  else if (fVar2 <= 256.0) {
    uVar1 = 8;
  }
  else if (fVar2 <= 512.0) {
    uVar1 = 9;
  }
  else if (fVar2 <= 1024.0) {
    uVar1 = 10;
  }
  else if (fVar2 <= 2048.0) {
    uVar1 = 0xb;
  }
  else if (fVar2 <= 4096.0) {
    uVar1 = 0xc;
  }
  else if (fVar2 <= 8192.0) {
    uVar1 = 0xd;
  }
  else if (fVar2 <= 16384.0) {
    uVar1 = 0xe;
  }
  else if (fVar2 <= 32768.0) {
    uVar1 = 0xf;
  }
  else if (fVar2 <= 65536.0) {
    uVar1 = 0x10;
  }
  else if (fVar2 <= 131072.0) {
    uVar1 = 0x11;
  }
  else if (fVar2 <= 262144.0) {
    uVar1 = 0x12;
  }
  else if (fVar2 <= 524288.0) {
    uVar1 = 0x13;
  }
  else if (fVar2 <= 1048576.0) {
    uVar1 = 0x14;
  }
  else if (fVar2 <= 2097152.0) {
    uVar1 = 0x15;
  }
  else if (fVar2 <= 4194304.0) {
    uVar1 = 0x16;
  }
  else if (fVar2 <= 8388608.0) {
    uVar1 = 0x17;
  }
  else if (fVar2 <= 1.677722e+07) {
    uVar1 = 0x18;
  }
  else if (fVar2 <= 3.355443e+07) {
    uVar1 = 0x19;
  }
  else if (fVar2 <= 6.710886e+07) {
    uVar1 = 0x1a;
  }
  else if (fVar2 <= 1.342177e+08) {
    uVar1 = 0x1b;
  }
  else if (fVar2 <= 2.684355e+08) {
    uVar1 = 0x1c;
  }
  else if (fVar2 <= 5.368709e+08) {
    uVar1 = 0x1d;
  }
  else if (fVar2 <= 1.073742e+09) {
    uVar1 = 0x1e;
  }
  else if (fVar2 <= 2.147484e+09) {
    uVar1 = 0x1f;
  }
  else {
    if (4.294967e+09 < fVar2) {
      return;
    }
    uVar1 = 0x20;
  }
  *(undefined4 *)(this + 0x10) = uVar1;
  return;
}


