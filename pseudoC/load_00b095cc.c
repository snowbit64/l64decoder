// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00b095cc
// Size: 1160 bytes
// Signature: undefined __cdecl load(char * param_1, AudioBufferDesc * param_2)


/* AudioLoaderWAV::load(char const*, AudioBufferDesc&) */

void AudioLoaderWAV::load(char *param_1,AudioBufferDesc *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long *this;
  ulong uVar7;
  uchar *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  int local_80;
  uint local_7c;
  int local_78 [2];
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,false
                                 );
  if (this != (long *)0x0) {
    uVar7 = (**(code **)(*this + 0x10))();
    if ((uVar7 & 1) != 0) {
      uVar3 = (**(code **)(*this + 0x48))(this);
      puVar8 = (uchar *)operator_new__((ulong)uVar3);
      uVar4 = (**(code **)(*this + 0x28))(this,puVar8,uVar3);
      if (uVar4 == uVar3) {
        (**(code **)(*this + 8))(this);
        this = (long *)operator_new(0x20);
                    /* try { // try from 00b0968c to 00b0969f has its CatchHandler @ 00b09a6c */
        MemoryBufferedFile::MemoryBufferedFile((MemoryBufferedFile *)this,puVar8,uVar3,0,true);
        local_90 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        iVar5 = (**(code **)(*this + 0x28))(this,local_78,0xc);
        if (iVar5 == 0xc) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          *(undefined4 *)(param_2 + 0x48) = 0;
          if ((local_78[0] != 0x46464952) || (local_70 != 0x45564157)) goto LAB_00b099b0;
          iVar5 = (**(code **)(*this + 0x28))(this,&local_80,8);
          if (iVar5 == 8) {
            bVar2 = false;
            iVar5 = 0xc;
            do {
              iVar5 = iVar5 + 8;
              if (local_80 == 0x61746164) {
                if (*(void **)(param_2 + 0x40) != (void *)0x0) {
                  operator_delete__(*(void **)(param_2 + 0x40));
                }
                uVar7 = (ulong)local_7c;
                pvVar9 = operator_new__(uVar7);
                lVar11 = *this;
                *(void **)(param_2 + 0x40) = pvVar9;
                uVar3 = (**(code **)(lVar11 + 0x28))(this,pvVar9,uVar7);
                if (uVar3 != local_7c) {
                  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
                    operator_delete__(*(void **)(param_2 + 0x40));
                  }
                  *(undefined8 *)(param_2 + 0x40) = 0;
                  if (!bVar2) goto LAB_00b098a8;
                  goto LAB_00b099b0;
                }
                iVar5 = uVar3 + iVar5;
                *(uint *)(param_2 + 0x48) = uVar3;
              }
              else if (local_80 == 0x20746d66) {
                if (local_7c < 0x35) {
                  uVar3 = (**(code **)(*this + 0x28))(this,&local_c0);
                  if (uVar3 != local_7c) break;
                  if (uStack_b8._6_2_ == 8) goto LAB_00b0989c;
                  iVar5 = uVar3 + iVar5;
                  bVar2 = true;
                }
                else {
                  iVar5 = local_7c + iVar5;
                  (**(code **)(*this + 0x38))(this,iVar5);
                }
              }
              else {
                iVar5 = local_7c + iVar5;
                (**(code **)(*this + 0x38))(this,iVar5);
              }
              if ((local_7c & 1) != 0) {
                iVar5 = iVar5 + 1;
                (**(code **)(*this + 0x38))(this,iVar5);
              }
              iVar6 = (**(code **)(*this + 0x28))(this,&local_80,8);
            } while (iVar6 == 8);
            if (!bVar2) goto LAB_00b0989c;
          }
          else {
LAB_00b0989c:
            if (*(void **)(param_2 + 0x40) != (void *)0x0) {
              operator_delete__(*(void **)(param_2 + 0x40));
            }
LAB_00b098a8:
            *(undefined8 *)(param_2 + 0x40) = 0;
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar5 != 0)) {
                    /* try { // try from 00b09a18 to 00b09a23 has its CatchHandler @ 00b09a54 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: Could not load %s, 8 bit PCM is not supported.\n",param_1);
          }
          if (*(void **)(param_2 + 0x40) != (void *)0x0) {
            if ((short)local_c0 == 0x166) {
              param_2[4] = (AudioBufferDesc)0x0;
              *(undefined4 *)param_2 = 6;
              *(undefined4 *)(param_2 + 8) = local_c0._4_4_;
              *(uint *)(param_2 + 0xc) = (uint)local_c0._2_2_;
              *(undefined4 *)(param_2 + 0x10) = local_a0._4_4_;
              puVar10 = (undefined8 *)operator_new__(0x34);
              *(undefined8 **)(param_2 + 0x18) = puVar10;
              *(undefined4 *)(param_2 + 0x20) = 0x34;
              puVar10[1] = uStack_b8;
              *puVar10 = local_c0;
              puVar10[3] = uStack_a8;
              puVar10[2] = local_b0;
              puVar10[5] = uStack_98;
              puVar10[4] = local_a0;
              *(undefined4 *)(puVar10 + 6) = local_90;
            }
            else {
              if (local_c0._2_2_ == 2) {
                iVar5 = 3;
                if (uStack_b8._6_2_ != 0x10) {
                  iVar5 = 1;
                }
              }
              else {
                if (local_c0._2_2_ != 1) {
                  operator_delete__(*(void **)(param_2 + 0x40));
                  *(undefined8 *)(param_2 + 0x40) = 0;
                  goto LAB_00b09880;
                }
                iVar5 = (uint)(uStack_b8._6_2_ == 0x10) << 1;
              }
              *(int *)param_2 = iVar5;
              uVar3 = (uint)uStack_b8._6_2_ * (uint)local_c0._2_2_ >> 3;
              param_2[4] = (AudioBufferDesc)0x0;
              *(undefined8 *)(param_2 + 0x18) = 0;
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = *(uint *)(param_2 + 0x48) / uVar3;
              }
              *(undefined4 *)(param_2 + 8) = local_c0._4_4_;
              *(uint *)(param_2 + 0xc) = (uint)local_c0._2_2_;
              *(uint *)(param_2 + 0x10) = uVar4;
            }
          }
          goto LAB_00b099b0;
        }
      }
      else {
        operator_delete__(puVar8);
      }
LAB_00b09880:
      (**(code **)(*this + 8))(this);
      bVar2 = false;
      goto LAB_00b099cc;
    }
LAB_00b099b0:
    (**(code **)(*this + 8))(this);
  }
  bVar2 = *(long *)(param_2 + 0x40) != 0;
LAB_00b099cc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


