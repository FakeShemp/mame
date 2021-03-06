// license:BSD-3-Clause
// copyright-holders:Fabio Priuli
#ifndef MAME_BUS_A800_SPARTA_H
#define MAME_BUS_A800_SPARTA_H

#pragma once

#include "rom.h"


// ======================> a800_rom_spartados_device

class a800_rom_spartados_device : public a800_rom_device
{
public:
	// construction/destruction
	a800_rom_spartados_device(const machine_config &mconfig, const char *tag, device_t *owner, uint32_t clock);

	virtual uint8_t read_80xx(offs_t offset) override;
	virtual void write_d5xx(offs_t offset, uint8_t data) override;

protected:
	// device-level overrides
	virtual void device_start() override;
	virtual void device_reset() override;

	int m_bank, m_subslot_enabled;
};



// device type definition
DECLARE_DEVICE_TYPE(A800_ROM_SPARTADOS, a800_rom_spartados_device)


#endif // MAME_BUS_A800_SPARTA_H
