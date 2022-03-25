/*
** EPITECH PROJECT, 2021
** Tek2
** File description:
** Array.inl
*/

/*
    EMPLACE FRONT
*/
template <typename T>
inline T& jsnp::Array::emplace_front(T value)
{
    throw std::exception();
}

template <>
inline jsnp::Null& jsnp::Array::emplace_front(jsnp::Null null)
{
    (void)null;
    m_values.push_front(Value());
    return (m_values.front().value<jsnp::Null>());
}

template <>
inline int& jsnp::Array::emplace_front(int integer)
{
    m_values.push_front(Value(integer));
    return (m_values.front().value<int>());
}

template <>
inline float& jsnp::Array::emplace_front(float decimal)
{
    m_values.push_front(Value(decimal));
    return (m_values.front().value<float>());
}

template <>
inline bool& jsnp::Array::emplace_front(bool boolean)
{
    m_values.push_front(Value(boolean));
    return (m_values.front().value<bool>());
}

template <>
inline std::string& jsnp::Array::emplace_front(std::string str)
{
    m_values.push_front(Value(str));
    return (m_values.front().value<std::string>());
}

template <>
inline jsnp::Array& jsnp::Array::emplace_front(jsnp::Array array)
{
    m_values.push_front(Value(array));
    return (m_values.front().value<jsnp::Array>());
}

template <>
inline jsnp::Object& jsnp::Array::emplace_front(jsnp::Object object)
{
    m_values.push_front(Value(object));
    return (m_values.front().value<jsnp::Object>());
}

/*
    EMPLACE BACK
*/
template <typename T>
inline T& jsnp::Array::emplace_back(T value)
{
    throw std::exception();
}

template <>
inline jsnp::Null& jsnp::Array::emplace_back(jsnp::Null null)
{
    (void)null;
    m_values.push_back(Value());
    return (m_values.back().value<jsnp::Null>());
}

template <>
inline int& jsnp::Array::emplace_back(int integer)
{
    m_values.push_back(Value(integer));
    return (m_values.back().value<int>());
}

template <>
inline float& jsnp::Array::emplace_back(float decimal)
{
    m_values.push_back(Value(decimal));
    return (m_values.back().value<float>());
}

template <>
inline bool& jsnp::Array::emplace_back(bool boolean)
{
    m_values.push_back(Value(boolean));
    return (m_values.back().value<bool>());
}

template <>
inline std::string& jsnp::Array::emplace_back(std::string str)
{
    m_values.push_back(Value(str));
    return (m_values.back().value<std::string>());
}

template <>
inline jsnp::Array& jsnp::Array::emplace_back(jsnp::Array array)
{
    m_values.push_back(Value(array));
    return (m_values.back().value<jsnp::Array>());
}

template <>
inline jsnp::Object& jsnp::Array::emplace_back(jsnp::Object object)
{
    m_values.push_back(Value(object));
    return (m_values.back().value<jsnp::Object>());
}

/*
    EMPLACE AT
*/
template <typename T>
inline T& jsnp::Array::emplace_at(T value, unsigned index)
{
    throw std::exception();
}

template <>
inline jsnp::Null& jsnp::Array::emplace_at(jsnp::Null nullV, unsigned index)
{
    nullV;
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(nullV));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value());
    return (it->value<jsnp::Null>());
}

template <>
inline int& jsnp::Array::emplace_at(int integer, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(integer));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(integer));
    return (it->value<int>());
}

template <>
inline float& jsnp::Array::emplace_at(float decimal, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(decimal));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(decimal));
    return (it->value<float>());
}

template <>
inline bool& jsnp::Array::emplace_at(bool boolean, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(boolean));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(boolean));
    return (it->value<bool>());
}

template <>
inline std::string& jsnp::Array::emplace_at(std::string str, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(str));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(str));
    return (it->value<std::string>());
}

template <>
inline jsnp::Array& jsnp::Array::emplace_at(jsnp::Array array, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(array));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(array));
    return (it->value<jsnp::Array>());
}

template <>
inline jsnp::Object& jsnp::Array::emplace_at(jsnp::Object object, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (emplace_back(object));
    else
        it = m_values.insert(std::next(m_values.begin(), index), Value(object));
    return (it->value<jsnp::Object>());
}

/*
    REMOVE
*/
inline void jsnp::Array::remove(int index)
{
    if (index >= m_values.size())
        throw std::exception();
    m_values.erase(std::next(m_values.begin(), index));
}

/*
    INSERT
*/
inline jsnp::Value& jsnp::Array::insert_front(jsnp::Value& value)
{
    m_values.push_front(value);
    return (m_values.front());
}

inline jsnp::Value& jsnp::Array::insert_back(jsnp::Value& value)
{
    m_values.push_back(value);
    return (m_values.back());
}

inline jsnp::Value& jsnp::Array::insert_at(jsnp::Value& value, unsigned index)
{
    std::list<jsnp::Value>::iterator it;

    if (index > m_values.size())
        return (insert_back(value));
    else
        it = m_values.insert(std::next(m_values.begin(), index), value);
    return (*it);
}

/*
    OTHER
*/
inline jsnp::Value& jsnp::Array::operator[](unsigned index)
{
    for (unsigned ctr = 0; auto& val : m_values) {
        if (ctr == index)
            return (val);
        ctr += 1;
    }
    throw std::exception();
}