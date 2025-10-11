#pragma once

class Connectable {
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
    virtual ~Connectable() = default;
};
